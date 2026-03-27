#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Actor.h"
#include "Engine/EngineTypes.h"
#include "GameplayTagContainer.h"
#include "EAreaEntranceType.h"
#include "GGInteractInterface.h"
#include "RecentActor.h"
#include "GGTeleportAreaEntrance.generated.h"

class AGGPlayerController;
class AGGPlayerState;
class UArrowComponent;
class UBoxComponent;
class UGGTeleportAreaDataAsset;
class UPrimitiveComponent;
class USceneComponent;
class UTextRenderComponent;

UCLASS(Abstract, Blueprintable)
class GOAT2_API AGGTeleportAreaEntrance : public AActor, public IGGInteractInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* SceneRoot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UArrowComponent* ExitLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UArrowComponent* LaunchDirection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBoxComponent* OverlapBox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextRenderComponent* EditorNameDisplayText;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UGGTeleportAreaDataAsset* AreaAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EAreaEntranceType EntranceType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bMainAreaEntryPoint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEntranceStartActive;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bTravelByOverlap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PlayerLaunchForce;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PlayerSpawnDistanceAway;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShouldGatherGoats;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString GatherID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DistanceConsideredReached;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float InviteDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShowGoatCounterNotification;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bRemoveAutomatically;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bManuallySetReachedTarget;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_bIsEntranceActive, meta=(AllowPrivateAccess=true))
    bool bIsEntranceActive;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRecentActor> RecentlyTraveled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    TArray<AGGPlayerState*> PlayersInOverlapBox;
    
public:
    AGGTeleportAreaEntrance(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SetAreaEntranceActive(bool bNewActive);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_bIsEntranceActive();
    
    UFUNCTION(BlueprintCallable)
    void OnEndOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    
    UFUNCTION(BlueprintCallable)
    void OnBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnAllGoatsGathered_BP();
    
    UFUNCTION(BlueprintCallable)
    void OnAllGoatsGathered(const FString& DoneGatherID);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void MakePlayerStartTravel(AGGPlayerController* Player);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void MakePlayersStartTravel(TArray<AGGPlayerController*> Players);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void MakePlayersInOverlapStartTravel();
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void MakeAllPlayersStartTravel();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsAreaEntranceActive() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void IsActiveChanged();
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, BlueprintPure)
    bool HasPlayerRecentlyTraveled(AGGPlayerController* Player);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetLaunchDirection() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    FText GetInviteTitle(AGGPlayerState* Player);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    FText GetInviteBody(AGGPlayerState* Player);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    FText GetGoatCountTitle(AGGPlayerState* Player);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    FGameplayTag GetGoatCountTag(AGGPlayerState* Player);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    FText GetGoatCountBody(AGGPlayerState* Player);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FTransform GetExitTransform() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool AreAllPlayersInOverlap() const;
    

    // Fix for true pure virtual functions not being implemented
};

