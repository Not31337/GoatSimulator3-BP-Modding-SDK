#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTTaskNode.h"
#include "ENPCAnimationStates.h"
#include "BTTask_GGSetAnimationState.generated.h"

UCLASS(Blueprintable)
class GOAT2_API UBTTask_GGSetAnimationState : public UBTTaskNode {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ENPCAnimationStates NewState;
    
    UBTTask_GGSetAnimationState();

};

