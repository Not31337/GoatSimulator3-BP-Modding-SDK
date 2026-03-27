#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTDecorator.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "BTDecorator_GGIsVehicleFlipped.generated.h"

UCLASS(Blueprintable)
class GOAT2_API UBTDecorator_GGIsVehicleFlipped : public UBTDecorator {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBlackboardKeySelector VehicleToCheck;
    
public:
    UBTDecorator_GGIsVehicleFlipped();

};

