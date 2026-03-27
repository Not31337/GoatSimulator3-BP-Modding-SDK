#pragma once
#include "CoreMinimal.h"
#include "OnCharacterChangedWaterVolumeDelegate.generated.h"

class APhysicsVolume;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnCharacterChangedWaterVolume, APhysicsVolume*, OldWaterVolume, APhysicsVolume*, NewWaterVolume);

