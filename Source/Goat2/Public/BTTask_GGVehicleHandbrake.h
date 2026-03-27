#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTTaskNode.h"
#include "BTTask_GGVehicleHandbrake.generated.h"

UCLASS(Blueprintable)
class GOAT2_API UBTTask_GGVehicleHandbrake : public UBTTaskNode {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool HandbrakeInput;
    
public:
    UBTTask_GGVehicleHandbrake();

};

