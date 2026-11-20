#pragma once
#include "CoreMinimal.h"
#include "GGRollercoasterTrain_SingleDelegateDelegate.generated.h"

class AGGRollercoasterTrainCar;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_OneParam(FGGRollercoasterTrain_SingleDelegate, AGGRollercoasterTrainCar*, Train);

