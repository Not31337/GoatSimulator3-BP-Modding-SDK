#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTDecorator.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "BTDecorator_GGIsNPCPerforming.generated.h"

UCLASS(Blueprintable)
class GOAT2_API UBTDecorator_GGIsNPCPerforming : public UBTDecorator {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBlackboardKeySelector CurrentEvent;
    
    UBTDecorator_GGIsNPCPerforming();

};

