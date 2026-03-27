#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTDecorator.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "ENPCAnimationStates.h"
#include "BTDecorator_GGHasAnimState.generated.h"

UCLASS(Blueprintable)
class GOAT2_API UBTDecorator_GGHasAnimState : public UBTDecorator {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBlackboardKeySelector SelfActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ENPCAnimationStates StateToCheckFor;
    
public:
    UBTDecorator_GGHasAnimState();

};

