#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTTaskNode.h"
#include "BTTask_GGStopVehicleInput.generated.h"

UCLASS(Blueprintable)
class GOAT2_API UBTTask_GGStopVehicleInput : public UBTTaskNode {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool ClearThrottle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool ClearSteering;
    
public:
    UBTTask_GGStopVehicleInput();

};

