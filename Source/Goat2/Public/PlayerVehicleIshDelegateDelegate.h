#pragma once
#include "CoreMinimal.h"
#include "PlayerVehicleIshDelegateDelegate.generated.h"

class AGGGoat;
class APawn;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FPlayerVehicleIshDelegate, AGGGoat*, Goat, APawn*, VehicleIsh);

