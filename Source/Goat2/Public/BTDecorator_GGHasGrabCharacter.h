#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTDecorator.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "BTDecorator_GGHasGrabCharacter.generated.h"

UCLASS(Blueprintable)
class GOAT2_API UBTDecorator_GGHasGrabCharacter : public UBTDecorator {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBlackboardKeySelector SelfActor;
    
public:
    UBTDecorator_GGHasGrabCharacter();

};

