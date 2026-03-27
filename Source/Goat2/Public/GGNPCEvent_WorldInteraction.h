#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineTypes.h"
#include "GameplayTagContainer.h"
#include "GGNPCEvent.h"
#include "Templates/SubclassOf.h"
#include "WeightedElement_NPCWaypoint.h"
#include "GGNPCEvent_WorldInteraction.generated.h"

class AActor;
class AGGNPCWaypoint;
class AGGNPCWaypoint_WorldInteraction;
class AGGNPC_Humanoid;
class UGGCrowdSystemComponent;
class UPrimitiveComponent;
class USphereComponent;

UCLASS(Blueprintable)
class GOAT2_API AGGNPCEvent_WorldInteraction : public AGGNPCEvent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USphereComponent* OverlapSphere;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UGGCrowdSystemComponent* GGCrowdSystem;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAutoAddCreatedWaypoints;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ChanceToTrigger;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSkipTakenWaypoint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<AGGNPCWaypoint> WaypointA;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FWeightedElement_NPCWaypoint> WaypointArrayA;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCanEditWaypointA;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCanEditWaypointArrayA;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bForceEnvironmentalsIntoCivilians;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AGGNPCWaypoint*> ClaimedWaypoints;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bHasQueue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<AActor> QueueRotationTargetActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 QueueLength;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SpaceBetweenSpots;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LengthUntilFirstSpot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDebugDrawQueue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AGGNPCWaypoint_WorldInteraction> WaypointClass;
    
    AGGNPCEvent_WorldInteraction(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void OverlapBegin(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void NPCReachedWaypoint(AGGNPCWaypoint* Waypoint, AGGNPC_Humanoid* NPC);
    
    UFUNCTION(BlueprintCallable)
    void NewWaypoint();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BehaviorCallback(AGGNPCWaypoint_WorldInteraction* Waypoint, AGGNPC_Humanoid* NPC, int32 ID, FGameplayTag Tag);
    
};

