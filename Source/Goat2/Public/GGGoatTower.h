#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Engine/EngineTypes.h"
#include "Curves/CurveFloat.h"
#include "GameplayTagContainer.h"
#include "ETowerRiseState.h"
#include "GGAreaInfoContextInterface.h"
#include "GGInteractInterface.h"
#include "GGRadarInterface.h"
#include "OverrideLocationsParameters.h"
#include "GGGoatTower.generated.h"

class AGGGoat;
class AGGLevelSequenceActor;
class AGGPlayerState;
class APlayerController;
class UArrowComponent;
class UBoxComponent;
class UObject;
class UPrimitiveComponent;
class USceneComponent;
class UStaticMeshComponent;

UCLASS(Blueprintable)
class GOAT2_API AGGGoatTower : public AActor, public IGGInteractInterface, public IGGRadarInterface, public IGGAreaInfoContextInterface {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* SceneRoot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* TowerMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UArrowComponent* TeleportLocationArrow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBoxComponent* TowerBoxTrigger;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_HasBeenSynchronised, meta=(AllowPrivateAccess=true))
    bool bHasBeenSynchronised;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    bool bWasSynchronisedOnLoad;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bHasPlayedMapSyncAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsLevelDefaultTower;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString TowerName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText TowerAreaName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 RewardAmount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AGGLevelSequenceActor* CameraSequenceActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SyncHoldDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText SyncNotificationTitle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText SyncNotificationBody;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FadeOutDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOverrideLocationsParameters LevelStreamOverrideLocations;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag SynchronizeParentTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* TeleportArea;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag InviteWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText GatherGoatsText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float GatherGoatsTextDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText FoundTowerWidgetTitle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText FoundTowerWidgetBody;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FoundTowerWidgetDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float InviteMinDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCanRise;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRuntimeFloatCurve GoatTowerRiseCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RelativeTargetHeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float YawAmountToRotate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RiseTime;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_TowerRiseState, meta=(AllowPrivateAccess=true))
    ETowerRiseState TowerRiseState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    TArray<AGGGoat*> OverlappedGoats;
    
public:
    AGGGoatTower(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnTowerFinishedRising();
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_TowerRiseState();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_HasBeenSynchronised();
    
    UFUNCTION(BlueprintCallable)
    void OnPlayerLoggedIn(APlayerController* NewPlayerController);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnClientTowerSynchronised();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnCameraSequenceFinished(AGGGoat* FinishedForGoat);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnCameraSeqFinished();
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void MulticastGoatSynchronisedWithTower(AGGGoat* SyncingGoat);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void MulticastFadeOut();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsAllGoatsInRange() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasBeenSynchronised() const;
    
    UFUNCTION(BlueprintCallable)
    void HandleUnsyncedTowerOverlapEnd(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    
    UFUNCTION(BlueprintCallable)
    void HandleUnsyncedTowerOverlapBegin(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIdex, bool bFromSweep, const FHitResult& SweepResult);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void GoatSynchronisedWithTower(AGGGoat* SyncingGoat);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<AGGPlayerState*> GetOverlappingPlayers();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<AGGGoat*> GetOverlappingGoats();
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false, meta=(WorldContext="WorldContextObject"))
    void CreateTowerSyncedNotification(UObject* WorldContextObject) const;
    

    // Fix for true pure virtual functions not being implemented
};

