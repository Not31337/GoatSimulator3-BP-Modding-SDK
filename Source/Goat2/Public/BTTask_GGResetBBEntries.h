#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTTaskNode.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "BTTask_GGResetBBEntries.generated.h"

UCLASS(Blueprintable)
class GOAT2_API UBTTask_GGResetBBEntries : public UBTTaskNode {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FBlackboardKeySelector> BlackboardEntries;
    
    UBTTask_GGResetBBEntries();

};

