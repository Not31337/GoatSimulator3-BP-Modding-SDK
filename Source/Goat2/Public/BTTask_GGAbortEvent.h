#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTTaskNode.h"
#include "BTTask_GGAbortEvent.generated.h"

UCLASS(Blueprintable)
class GOAT2_API UBTTask_GGAbortEvent : public UBTTaskNode {
    GENERATED_BODY()
public:
    UBTTask_GGAbortEvent();

};

