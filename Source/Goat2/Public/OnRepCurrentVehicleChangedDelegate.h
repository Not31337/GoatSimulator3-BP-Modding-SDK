#pragma once
#include "CoreMinimal.h"
#include "OnRepCurrentVehicleChangedDelegate.generated.h"

class AGGVehicle;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnRepCurrentVehicleChanged, AGGVehicle*, NewVehicle);

