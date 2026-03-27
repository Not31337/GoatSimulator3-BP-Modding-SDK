#pragma once
#include "CoreMinimal.h"
#include "OnVehiclePooledOrMovedDelegate.generated.h"

class AGGVehicle;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnVehiclePooledOrMoved, AGGVehicle*, Vehicle, bool, WasPooled);

