#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EEventActiveState.h"
#include "EEventCompletedState.h"
#include "ETowerSynchronizationEvent.h"
#include "GGQuestBase.h"
#include "QuestHint.h"
#include "RadarCoordinateData.h"
#include "GGEventBase.generated.h"

class AActor;
class AGGEventDiscoveryBroadcastVolume;
class AGGGoatTower;
class AGGLevelSequenceActor;
class UGGEventPointComponent;
class ULevelSequence;
class ULevelSequencePlayer;

UCLASS(Blueprintable)
class GOAT2_API AGGEventBase : public AGGQuestBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UGGEventPointComponent* MainEventPointComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    TArray<TSoftObjectPtr<UGGEventPointComponent>> EventPointComponents;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bGlobalEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FQuestHint> QuestHints;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSet<AGGEventDiscoveryBroadcastVolume*> EventDiscoveryBroadcastVolumes;
    
public:
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<AGGGoatTower> AssociatedGoatTower;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<AActor> AreaContextActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bTreatAsSecretInMapAreaInformation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bHideOnMapTilCompleted;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ULevelSequence* CompletedSequence;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CompletedSequenceDelay;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRadarCoordinateData EventRadarData;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRadarCoordinateData PreviouslyDiscoveredData;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRadarCoordinateData CompletedRadarData;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRadarCoordinateData TutorialRadarData;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRadarCoordinateData GoatTowerRadarData;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRadarCoordinateData ActiveRadarData;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRadarCoordinateData SecretRadarData;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRadarCoordinateData OverrideRadarData;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRadarCoordinateData WaypointRadarData;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bWasDeactivatedAfterCompletion;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AGGLevelSequenceActor* CompletedSequenceActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ULevelSequencePlayer* CompletedSequencePlayer;
    
public:
    AGGEventBase(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void RemoveEventPoint(UGGEventPointComponent* EventPoint);
    
    UFUNCTION(BlueprintCallable)
    void PlayEventCompletedSequence(bool PlayCameraCuts);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnHintActivatedBlueprint(const FString& HintID);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnGoatTowerSynchronised(AGGGoatTower* GoatTower, ETowerSynchronizationEvent SynchronizationEvent);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnDiscovered();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnCompletedSequencePlaying();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnCompletedSequenceFinished();
    
protected:
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void MulticastActivateHint(const FString& HintID);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsConsideredForNearestEvent();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasEverBeenDiscovered();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasBeenDiscoveredThisSession();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetEventStates(EEventActiveState& ActiveState, EEventCompletedState& CompletedState);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EEventCompletedState GetCompletionState();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetClosestEventPointLocation(FVector Location, float& OutDistance);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EEventActiveState GetActiveState();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool ConsideredCompletedInWorld();
    
protected:
    UFUNCTION(BlueprintCallable)
    void CompletedSequenceFinished();
    
public:
    UFUNCTION(BlueprintCallable)
    void AddEventPoint(UGGEventPointComponent* EventPoint);
    
};

