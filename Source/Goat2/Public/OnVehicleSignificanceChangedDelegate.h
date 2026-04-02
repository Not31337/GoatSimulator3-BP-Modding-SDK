#pragma once
#include "CoreMinimal.h"
#include "OnVehicleSignificanceChangedDelegate.generated.h"

class AGGVehicle;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FOnVehicleSignificanceChanged, AGGVehicle*, Vehicle, float, NewSignificance, float, OldSignificance);

