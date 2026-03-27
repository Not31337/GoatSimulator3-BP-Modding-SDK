#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "OnReachedPathTargetLocationDelegate.generated.h"

class AGGVehicle;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnReachedPathTargetLocation, AGGVehicle*, Vehicle, FVector, TargetLocation);

