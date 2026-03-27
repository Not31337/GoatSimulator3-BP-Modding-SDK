#pragma once
#include "CoreMinimal.h"
#include "OnVehicleExplodedDelegate.generated.h"

class AGGVehicle;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnVehicleExploded, AGGVehicle*, Vehicle);

