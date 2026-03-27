#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTDecorator.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "EStatusEffectTypes.h"
#include "BTDecorator_GGHasStatusEffect.generated.h"

UCLASS(Blueprintable)
class GOAT2_API UBTDecorator_GGHasStatusEffect : public UBTDecorator {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBlackboardKeySelector TestActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EStatusEffectTypes StatusEffectType;
    
    UBTDecorator_GGHasStatusEffect();

};

