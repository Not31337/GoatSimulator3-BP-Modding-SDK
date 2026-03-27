#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTDecorator.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "EVehicleState.h"
#include "BTDecorator_GGIsVehicleInState.generated.h"

UCLASS(Blueprintable)
class GOAT2_API UBTDecorator_GGIsVehicleInState : public UBTDecorator {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBlackboardKeySelector VehicleToCheck;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EVehicleState StateToCheckAgainst;
    
public:
    UBTDecorator_GGIsVehicleInState();

};

