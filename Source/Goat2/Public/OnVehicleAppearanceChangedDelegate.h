#pragma once
#include "CoreMinimal.h"
#include "OnVehicleAppearanceChangedDelegate.generated.h"

class AGGVehicle;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FOnVehicleAppearanceChanged, AGGVehicle*, Vehicle, const FString&, RowName, const FString&, AppearanceString);

