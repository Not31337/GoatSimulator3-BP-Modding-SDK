#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTDecorator.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "BTDecorator_GGIsPerceivable.generated.h"

UCLASS(Blueprintable)
class GOAT2_API UBTDecorator_GGIsPerceivable : public UBTDecorator {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBlackboardKeySelector Character;
    
public:
    UBTDecorator_GGIsPerceivable();

};

