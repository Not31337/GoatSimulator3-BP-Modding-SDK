#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Engine/DataTable.h"
#include "GameFramework/GameStateBase.h"
#include "Engine/EngineTypes.h"
#include "GameplayTagContainer.h"
#include "CurrentGatherEvent.h"
#include "GGFact_GearListPair.h"
#include "GGQuest_GearListPair.h"
#include "ReplicatedStretchGoalState.h"
#include "WorldStats.h"
#include "GGGameState.generated.h"

class AActor;
class AGGBossLevelMediaSoundListener;
class AGGCastleStretchGoal;
class AGGPlayerGameManager;
class AGGPlayerState;
class AGGQuestBase;
class UGGFactsDatabaseSystem;
class UGGGoatGearList;
class UGGPropStateManager;
class UMaterialInstance;
class UObject;

UCLASS(Blueprintable)
class GOAT2_API AGGGameState : public AGameStateBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    AGGPlayerGameManager* PlayerGameManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Replicated, meta=(AllowPrivateAccess=true))
    UGGFactsDatabaseSystem* FactsDatabase;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<AGGPlayerGameManager> PlayerGameManagerClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_WorldStats, meta=(AllowPrivateAccess=true))
    FWorldStats WorldStats;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_SavedServerPlaytime, meta=(AllowPrivateAccess=true))
    FTimecode SavedServerPlaytime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    FGuid CurrentWorldIdentifier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<uint8, TSoftObjectPtr<UMaterialInstance>> GlobalPlayerColorMaterials;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PublicDemoDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PressDemoDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTimerHandle PublicDemoTimerHandle;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FLinearColor> DefaultPlayerColors;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UGGPropStateManager* PropStateManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AGGBossLevelMediaSoundListener* BossLevelMediaSoundListener;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DurationAfterServerStartForClientIntro;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    bool bShouldClientsPlayIntro;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UGGGoatGearList* DisabledGear;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    TArray<FGGQuest_GearListPair> EnableGearAfterEventCompletion;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FGGFact_GearListPair> EnableGearIfFactIsTrue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle TutorialRowGearsReEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bOnlyShowGearsReEnabledTutorialInNextSession;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    AGGCastleStretchGoal* CurrentlyActiveStretchGoal;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_ReplicatedStretchGoalStates, meta=(AllowPrivateAccess=true))
    TArray<FReplicatedStretchGoalState> ReplicatedStretchGoalStates;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    TArray<FCurrentGatherEvent> ClientCurrentGatherEvents;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    TArray<FGameplayTag> ClientUsedInviteTags;
    
public:
    AGGGameState(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

private:
    UFUNCTION(BlueprintCallable)
    void UpdateTelemetrySystem();
    
    UFUNCTION(BlueprintCallable)
    void UpdatePlayerLocationInfo();
    
protected:
    UFUNCTION(BlueprintCallable)
    void UpdateFactsEnablingGearIfTrue();
    
public:
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void SkipIntro();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool ShouldClientsPlayIntro() const;
    
    UFUNCTION(BlueprintCallable)
    void OnRep_WorldStats();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_SavedServerPlaytime();
    
private:
    UFUNCTION(BlueprintCallable)
    void OnRep_ReplicatedStretchGoalStates();
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnQuestCompleted(AGGQuestBase* Quest, AGGPlayerState* OptionalPlayerState);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnLoggedInAndCheckedOwnership();
    
public:
    UFUNCTION(BlueprintCallable)
    void OnDemoTimerExpire();
    
protected:
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void MulticastOnDisabledGearsUpdated(bool bGearsEnabled, UGGGoatGearList* GearList);
    
public:
    UFUNCTION(BlueprintCallable)
    bool IsPlayerColorAvailable(int32 Index, AGGPlayerState* PlayerState, int32& SetIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContext"))
    static bool IsAnyGearDisabled(const UObject* WorldContext);
    
private:
    UFUNCTION(BlueprintCallable)
    void InitPlayerLocationInfoTimer();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasMultiplePlayers() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<int32> GetTakenColorIndices(AGGPlayerState* InPlayerState);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetServerWorldTimeSecondsDelta() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetRandomAvailiableColor();
    
    UFUNCTION(BlueprintCallable)
    FString GetPlayerName(AActor* Player);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FLinearColor GetPlayerColor(AActor* Player) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetIsDemoPressMode();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<AGGPlayerState*> GetGGPlayerStates();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FLinearColor GetDefaultPlayerColor(int32 Index, bool bWithColorBlindness) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetAccurateServerWorldTimeSecondsDelta() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetAccurateServerWorldTimeSeconds() const;
    
private:
    UFUNCTION(BlueprintCallable)
    void DisableClientPlayIntro();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    FLinearColor ApplyColorBlindness(FLinearColor InColor) const;
    
};

