#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTTaskNode.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "EBehaviorActors.h"
#include "BTTask_GGPPickNewTargetActor.generated.h"

UCLASS(Blueprintable)
class GOAT2_API UBTTask_GGPPickNewTargetActor : public UBTTaskNode {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBlackboardKeySelector BehaviorDataContainer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBlackboardKeySelector TargetActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EBehaviorActors GetActorFrom;
    
public:
    UBTTask_GGPPickNewTargetActor();

};

