#pragma once
#include "CoreMinimal.h"
#include "OnMotorcycleSetOwnerDelegate.generated.h"

class AGGPlayerController;
class AGGVehicle;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnMotorcycleSetOwner, AGGVehicle*, Motorcycle, AGGPlayerController*, Owner);

