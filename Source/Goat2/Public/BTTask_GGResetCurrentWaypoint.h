#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTTaskNode.h"
#include "BTTask_GGResetCurrentWaypoint.generated.h"

UCLASS(Blueprintable)
class GOAT2_API UBTTask_GGResetCurrentWaypoint : public UBTTaskNode {
    GENERATED_BODY()
public:
    UBTTask_GGResetCurrentWaypoint();

};

