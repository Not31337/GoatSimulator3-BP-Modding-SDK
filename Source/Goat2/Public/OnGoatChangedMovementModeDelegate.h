#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineTypes.h"
#include "OnGoatChangedMovementModeDelegate.generated.h"

class AGGGoat;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_FiveParams(FOnGoatChangedMovementMode, AGGGoat*, Goat, TEnumAsByte<EMovementMode>, NewMovement, uint8, NewCustomMovement, TEnumAsByte<EMovementMode>, PrevMovement, uint8, PrevCustomMovement);

