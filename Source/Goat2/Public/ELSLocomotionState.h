#pragma once
#include "CoreMinimal.h"
#include "ELSLocomotionState.generated.h"

UENUM(BlueprintType)
enum class ELSLocomotionState : uint8 {
    None,
    NotMoving,
    Moving,
    Pivot,
    Stopping,
};

