#pragma once
#include "CoreMinimal.h"
#include "GGRollercoasterTrainCar_DelegateDelegate.generated.h"

class AGGRollercoasterTrainCar;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FGGRollercoasterTrainCar_Delegate, AGGRollercoasterTrainCar*, Train);

