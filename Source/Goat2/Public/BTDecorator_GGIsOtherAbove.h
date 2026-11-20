#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "BTDecorator_GGBase.h"
#include "BTDecorator_GGIsOtherAbove.generated.h"

UCLASS(Blueprintable)
class GOAT2_API UBTDecorator_GGIsOtherAbove : public UBTDecorator_GGBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBlackboardKeySelector SelfActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBlackboardKeySelector TargetValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DistanceToCheck;
    
    UBTDecorator_GGIsOtherAbove();

};

