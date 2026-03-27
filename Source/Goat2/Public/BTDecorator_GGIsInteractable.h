#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/Decorators/BTDecorator_BlackboardBase.h"
#include "BTDecorator_GGIsInteractable.generated.h"

UCLASS(Blueprintable)
class GOAT2_API UBTDecorator_GGIsInteractable : public UBTDecorator_BlackboardBase {
    GENERATED_BODY()
public:
    UBTDecorator_GGIsInteractable();

};

