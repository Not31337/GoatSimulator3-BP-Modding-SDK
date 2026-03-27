#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/Tasks/BTTask_BlackboardBase.h"
#include "BTTask_GGResetBBEntry.generated.h"

UCLASS(Blueprintable)
class GOAT2_API UBTTask_GGResetBBEntry : public UBTTask_BlackboardBase {
    GENERATED_BODY()
public:
    UBTTask_GGResetBBEntry();

};

