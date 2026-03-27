#pragma once
#include "CoreMinimal.h"
#include "EGoatDLC.h"
#include "EPlayerGamePhase.h"
#include "GGPlayerState.h"
#include "Templates/SubclassOf.h"
#include "GGGoatPlayerState.generated.h"

class AGGGameState;
class AGGPlayerGame_Base;
class AGGRadarWaypointActor;
class AGGVehicle;

UCLASS(Blueprintable)
class GOAT2_API AGGGoatPlayerState : public AGGPlayerState {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    AGGVehicle* SpawnedMotorcycle;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AGGRadarWaypointActor> PlayerWaypointActorClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    AGGRadarWaypointActor* PlayerWaypointActor;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    bool bIsWatchingLevelSequence;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    TArray<EGoatDLC> OwnedDLCs;
    
public:
    AGGGoatPlayerState(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

private:
    UFUNCTION(BlueprintCallable)
    void UpdatePlayerRadarData();
    
protected:
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void SetOwnedDLCs(const TArray<EGoatDLC>& UpdatedDLCs);
    
public:
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void ServerSetWatchingLevelSequence(bool bIsWatching);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnPlayerInfoChanged(AGGGameState* GameState);
    
    UFUNCTION(BlueprintCallable)
    void OnPlayerGamePlayerInfoChanged(AGGPlayerGame_Base* PlayerGame);
    
    UFUNCTION(BlueprintCallable)
    void OnPlayerGamePhaseChanged(AGGPlayerGame_Base* PlayerGame, TEnumAsByte<EPlayerGamePhase::Type> NewPhase);
    
    UFUNCTION(BlueprintCallable)
    void OnGameCurrentActiveGameChanged(AGGPlayerGame_Base* PlayerGame);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnDLCsUpdated();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasUpdatedDLCs() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<EGoatDLC> GetOwnedDLCs() const;
    
};

