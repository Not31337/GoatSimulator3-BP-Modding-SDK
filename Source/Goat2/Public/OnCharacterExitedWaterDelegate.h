#pragma once
#include "CoreMinimal.h"
#include "OnCharacterExitedWaterDelegate.generated.h"

class APhysicsVolume;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnCharacterExitedWater, APhysicsVolume*, OldWaterVolume);

