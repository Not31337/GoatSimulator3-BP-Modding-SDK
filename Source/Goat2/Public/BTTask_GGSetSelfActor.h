#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/Tasks/BTTask_BlackboardBase.h"
#include "BTTask_GGSetSelfActor.generated.h"

UCLASS(Blueprintable)
class GOAT2_API UBTTask_GGSetSelfActor : public UBTTask_BlackboardBase {
    GENERATED_BODY()
public:
    UBTTask_GGSetSelfActor();

};

