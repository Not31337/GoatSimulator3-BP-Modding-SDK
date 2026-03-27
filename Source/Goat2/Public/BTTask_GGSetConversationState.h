#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTTaskNode.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "EConversationStates.h"
#include "BTTask_GGSetConversationState.generated.h"

UCLASS(Blueprintable)
class GOAT2_API UBTTask_GGSetConversationState : public UBTTaskNode {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBlackboardKeySelector TargetNPC;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EConversationStates NewState;
    
public:
    UBTTask_GGSetConversationState();

};

