#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTTaskNode.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "GameplayTagContainer.h"
#include "BTTask_GGHandleWaypointAnimation.generated.h"

class AGGCharacter;
class AGGNPC;
class AGGNPCEvent_WorldInteraction;
class AGGNPCWaypoint;
class UAnimMontage;
class UBehaviorTreeComponent;
class UGGAnimNotify;

UCLASS(Blueprintable)
class GOAT2_API UBTTask_GGHandleWaypointAnimation : public UBTTaskNode {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBlackboardKeySelector CurrentEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBlackboardKeySelector CurrentWaypoint;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBehaviorTreeComponent* NodeOwnerComp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AGGNPC* NPC;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AGGNPCWaypoint* Waypoint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AGGNPCEvent_WorldInteraction* WIEvent;
    
public:
    UBTTask_GGHandleWaypointAnimation();

protected:
    UFUNCTION(BlueprintCallable)
    void OnGGAnimNotifyTrigger(AGGCharacter* TriggeredOnNPC, const UGGAnimNotify* AnimNotify, FGameplayTag NotifyTag);
    
    UFUNCTION(BlueprintCallable)
    void OnAnimationEnded(UAnimMontage* Montage, bool Interrupted);
    
};

