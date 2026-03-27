#pragma once
#include "CoreMinimal.h"
#include "OnVehicleAirBorneChangedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnVehicleAirBorneChanged, bool, bNewAirBorne);

