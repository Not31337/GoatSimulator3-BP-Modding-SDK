#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTTaskNode.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "BTTask_GGResetNPCStandupDelay.generated.h"

UCLASS(Blueprintable)
class GOAT2_API UBTTask_GGResetNPCStandupDelay : public UBTTaskNode {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBlackboardKeySelector SelfActor;
    
    UBTTask_GGResetNPCStandupDelay();

};

