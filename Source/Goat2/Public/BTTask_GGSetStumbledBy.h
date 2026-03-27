#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTTaskNode.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "BTTask_GGSetStumbledBy.generated.h"

UCLASS(Blueprintable)
class GOAT2_API UBTTask_GGSetStumbledBy : public UBTTaskNode {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBlackboardKeySelector StumbledBy;
    
    UBTTask_GGSetStumbledBy();

};

