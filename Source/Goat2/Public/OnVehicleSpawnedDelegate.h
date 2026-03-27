#pragma once
#include "CoreMinimal.h"
#include "OnVehicleSpawnedDelegate.generated.h"

class AGGVehicle;
class AGGVehicleSpawner;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnVehicleSpawned, AGGVehicleSpawner*, NPCSpawner, AGGVehicle*, Vehicle);

