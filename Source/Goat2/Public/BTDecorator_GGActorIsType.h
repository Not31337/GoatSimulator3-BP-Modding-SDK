#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTDecorator.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "ECheckTypes.h"
#include "BTDecorator_GGActorIsType.generated.h"

UCLASS(Blueprintable)
class GOAT2_API UBTDecorator_GGActorIsType : public UBTDecorator {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBlackboardKeySelector ActorToCheck;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ECheckTypes> TypesToCheck;
    
public:
    UBTDecorator_GGActorIsType();

};

