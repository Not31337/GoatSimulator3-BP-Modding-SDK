#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTDecorator.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "BTDecorator_GGCanBeInteracted.generated.h"

UCLASS(Blueprintable)
class GOAT2_API UBTDecorator_GGCanBeInteracted : public UBTDecorator {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBlackboardKeySelector InteractActor;
    
public:
    UBTDecorator_GGCanBeInteracted();

};

