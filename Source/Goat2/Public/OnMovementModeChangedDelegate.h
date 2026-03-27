#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineTypes.h"
#include "OnMovementModeChangedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_FourParams(FOnMovementModeChanged, TEnumAsByte<EMovementMode>, CurrentMovement, uint8, CustomMovement, TEnumAsByte<EMovementMode>, PrevMovement, uint8, PrevCustomMovement);

