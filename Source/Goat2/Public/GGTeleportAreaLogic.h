#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Engine/EngineTypes.h"
#include "AreaCheckpoint.h"
#include "OnPlayerEnteredAreaDelegate.h"
#include "OnPlayerExitedAreaDelegate.h"
#include "GGTeleportAreaLogic.generated.h"

class AGGGoat;
class AGGNPC;
class AGGPlayerController;
class AGGPlayerState;
class AGGTeleportAreaEntrance;
class AGGVehicle;
class UGGTeleportAreaDataAsset;
class USceneComponent;

UCLASS(Abstract, Blueprintable)
class GOAT2_API AGGTeleportAreaLogic : public AActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* SceneRoot;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnPlayerEnteredArea OnPlayerEnteredArea;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnPlayerExitedArea OnPlayerExitedArea;
    
protected:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TWeakObjectPtr<AActor>> RuntimeSpawnedActors;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseCheckpoints;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FAreaCheckpoint> Checkpoints;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCanEverGoBackwards;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    FAreaCheckpoint CurrentCheckpoint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AGGPlayerController*> PlayersInArea;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_PlayerStatesInArea, meta=(AllowPrivateAccess=true))
    TArray<AGGPlayerState*> PlayerStatesInArea;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AGGPlayerState*> BroadcastedPlayers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UGGTeleportAreaDataAsset* CurrentAreaAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AGGTeleportAreaEntrance* DefaultMainEntrance;
    
public:
    AGGTeleportAreaLogic(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SetCurrentCheckpoint_Name(const FString& CheckpointName);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SetCurrentCheckpoint_Index(int32 Index);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnVehiclePooledOrMoved(AGGVehicle* Vehicle, bool bWasPooled);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_PlayerStatesInArea();
    
    UFUNCTION(BlueprintCallable)
    void OnNPCPooledOrMoved(AGGNPC* NPC, bool bWasPooled);
    
    UFUNCTION(BlueprintCallable)
    void OnActorEndPlay(AActor* Actor, TEnumAsByte<EEndPlayReason::Type> EndPlayReason);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void NPCSpawnedIntoArea(AGGNPC* NPC);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void MulticastPlayerStartingToExitArea(AGGPlayerState* Player);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void MulticastAllAreaLevelsLoaded(UGGTeleportAreaDataAsset* AreaAsset, int32 Slot);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsAllPlayersInArea() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasReachedACheckpoint() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<AGGPlayerState*> GetPlayerStatesInArea();
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, BlueprintPure)
    TArray<AGGPlayerController*> GetPlayersInArea();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FAreaCheckpoint GetCurrentCheckpoint() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetAreaSlot() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UGGTeleportAreaDataAsset* GetAreaAsset() const;
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void ClearCurrentCheckpoint();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_PlayerStartingToExitArea(AGGPlayerState* Player, bool bLocalPlayerExited);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_PlayerRespawnedInArea(AGGPlayerState* Player, AGGGoat* Goat);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_PlayerExitedArea(AGGPlayerState* Player, bool bLocalPlayerExited);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_PlayerEnteredArea(AGGPlayerState* Player, bool bLocalPlayerEntered);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_AreaAboutToClose();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_AllAreaLevelsLoaded(UGGTeleportAreaDataAsset* AreaAsset, int32 Slot);
    
    UFUNCTION(BlueprintCallable)
    void AddRuntimeSpawnedActor(AActor* Actor);
    
};

