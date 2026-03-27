#pragma once
#include "CoreMinimal.h"
#include "OnCheckpointCrossedDelegate.generated.h"

class AActor;
class AGGVehicle;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FOnCheckpointCrossed, AActor*, CheckPoint, AGGVehicle*, Vehicle, int32, CheckPointNumber);

