#pragma once
#include "CoreMinimal.h"
#include "OnGearAbilityWasToggledDelegate.generated.h"

class AGGGoat;
class USceneComponent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FOnGearAbilityWasToggled, AGGGoat*, Goat, USceneComponent*, GearToggled, bool, Enabled);

