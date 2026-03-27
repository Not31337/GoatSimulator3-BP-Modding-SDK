#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTDecorator.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "BTDecorator_GGCanRoam.generated.h"

UCLASS(Blueprintable)
class GOAT2_API UBTDecorator_GGCanRoam : public UBTDecorator {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBlackboardKeySelector VehicleToCheck;
    
public:
    UBTDecorator_GGCanRoam();

};

