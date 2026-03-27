#pragma once
#include "CoreMinimal.h"
#include "OnCharacterEnteredWaterDelegate.generated.h"

class APhysicsVolume;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnCharacterEnteredWater, APhysicsVolume*, WaterVolume);

