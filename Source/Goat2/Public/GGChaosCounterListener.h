#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Engine/DataTable.h"
#include "ChaosCounterCooldownEntry.h"
#include "ChaosCounterCooldownSetting.h"
#include "EChaosCounterMode.h"
#include "QuestTier.h"
#include "GGChaosCounterListener.generated.h"

class AGGPlayerState;
class AGGQuestBase;
class UDataTable;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class GOAT2_API UGGChaosCounterListener : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EChaosCounterMode ChaosCounterMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> AllowedRecurringSourcesFilter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FChaosCounterCooldownSetting> CooldownSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BaseCooldown;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDebugPrints;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* SourceDataTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* SpendingSourceDataTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* RandomSourceDataTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle StaticChaosRewardRowEvent;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FChaosCounterCooldownEntry> CurrentCooldownEntries;
    
public:
    UGGChaosCounterListener(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    bool SpendChaosFromSourceWithAmount(const FString& SourceID, int32 Amount);
    
    UFUNCTION(BlueprintCallable)
    bool SpendChaosFromSource(const FString& SourceID, const FString& FallbackID);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnTokenAmountChanged(int32 Amount, const FString& AcquisitionID, const FString& AcquisitionSource);
    
    UFUNCTION(BlueprintCallable)
    void OnQuestTierCompleted(AGGQuestBase* Quest, const FQuestTier& Tier);
    
    UFUNCTION(BlueprintCallable)
    void OnQuestCompleted(AGGQuestBase* Quest, AGGPlayerState* OptionalPlayerState);
    
    UFUNCTION(BlueprintCallable)
    void OnQuestCollectionMilestoneReached(AGGQuestBase* Quest, const FQuestTier& Milestone);
    
    UFUNCTION(BlueprintCallable)
    bool IsRecurringAcquisitionAllowed(const FString& InSource);
    
    UFUNCTION(BlueprintCallable)
    bool IsCooldownActiveForSource(const FString& InSource);
    
public:
    UFUNCTION(BlueprintCallable)
    void GiveChaosAwardFromSourceWithAmount(const FString& SourceID, int32 Amount);
    
    UFUNCTION(BlueprintCallable)
    void GiveChaosAwardFromSource(const FString& SourceID, const FString& FallbackID);
    
    UFUNCTION(BlueprintCallable)
    int32 GetChaosFromEvent(AGGQuestBase* Quest);
    
    UFUNCTION(BlueprintCallable)
    static int32 GetChaosAwardFromTable(UDataTable* DataTable, FName RowName);
    
    UFUNCTION(BlueprintCallable)
    int32 GetChaos();
    
protected:
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientTriggerChaos(int32 Amount);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ChaosAmountChangedServer(int32 Amount, const FString& AcquisitionSource);
    
};

