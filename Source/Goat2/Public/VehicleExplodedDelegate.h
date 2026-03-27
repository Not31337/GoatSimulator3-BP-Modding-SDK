#pragma once
#include "CoreMinimal.h"
#include "VehicleExplodedDelegate.generated.h"

class AGGVehicle;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FVehicleExploded, AGGVehicle*, Vehicle);

