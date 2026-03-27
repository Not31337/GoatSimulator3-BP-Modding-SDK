#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Engine/EngineTypes.h"
#include "GameplayTagContainer.h"
#include "OnRadarPointAddDelegate.h"
#include "OnRadarPointRemoveDelegate.h"
#include "OnRadarPointUpdateDelegate.h"
#include "OnRadarVisibilityRulesModifiedDelegate.h"
#include "OnRadarWaypointDataUpdateDelegate.h"
#include "PlayerWaypointMapping.h"
#include "RadarCoordinateData.h"
#include "RadarSystemVisibilityRule.h"
#include "RadarWidgetClassData.h"
#include "GGRadarSystem.generated.h"

class AActor;
class AGGGameState;
class AGGPlayerState;

UCLASS(Blueprintable, ClassGroup=Custom, Within=GGGoatGameState, meta=(BlueprintSpawnableComponent))
class GOAT2_API UGGRadarSystem : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnRadarPointAdd OnRadarPointAddedDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnRadarPointRemove OnRadarPointRemovedDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnRadarPointUpdate OnRadarPointUpdatedDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnRadarWaypointDataUpdate OnRadarWaypointDataUpdateDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnRadarVisibilityRulesModified OnRadarVisibilityRulesModified;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRadarWidgetClassData> AdditionalRadarWidgetClasses;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<AActor*, FRadarCoordinateData> RadarData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_PlayerWaypoints, meta=(AllowPrivateAccess=true))
    TArray<FPlayerWaypointMapping> PlayerWaypoints;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRadarSystemVisibilityRule> VisibilityRules;
    
public:
    UGGRadarSystem(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable)
    void SetRadarActorAsWaypoint(AActor* WaypointActor, AGGPlayerState* WaypointOwner);
    
    UFUNCTION(BlueprintCallable)
    void RemoveVisibilityRules(FGameplayTag Source);
    
    UFUNCTION(BlueprintCallable)
    void RemoveRadarData(AActor* Owner);
    
    UFUNCTION(BlueprintCallable)
    void RemoveAllWaypointsWithOwner(AGGPlayerState* WaypointOwner);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_PlayerWaypoints();
    
    UFUNCTION(BlueprintCallable)
    void OnRadarActorEndedPlay(AActor* Actor, TEnumAsByte<EEndPlayReason::Type> EndPlayReason);
    
    UFUNCTION(BlueprintCallable)
    void OnPlayerInfoChanged(AGGGameState* GameState);
    
    UFUNCTION(BlueprintCallable)
    bool IsWaypointForPlayer(AActor* WaypointActor, AGGPlayerState* WaypointOwner);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsWaypoint(AActor* WaypointActor) const;
    
    UFUNCTION(BlueprintCallable)
    bool HasWaypoint(AGGPlayerState* WaypointOwner);
    
    UFUNCTION(BlueprintCallable)
    AActor* GetWaypointRadarActor(AGGPlayerState* WaypointOwner);
    
    UFUNCTION(BlueprintCallable)
    void GetWaypointPlayers(AActor* WaypointActor, TArray<AGGPlayerState*>& OutPlayers);
    
    UFUNCTION(BlueprintCallable)
    void AddVisibilityRule(const FRadarSystemVisibilityRule& VisibilityRule);
    
    UFUNCTION(BlueprintCallable)
    void AddRadarData(AActor* Owner);
    
};

