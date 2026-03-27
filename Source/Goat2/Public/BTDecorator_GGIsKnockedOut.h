#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTDecorator.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "BTDecorator_GGIsKnockedOut.generated.h"

UCLASS(Blueprintable)
class GOAT2_API UBTDecorator_GGIsKnockedOut : public UBTDecorator {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBlackboardKeySelector NPCCharacter;
    
public:
    UBTDecorator_GGIsKnockedOut();

};

