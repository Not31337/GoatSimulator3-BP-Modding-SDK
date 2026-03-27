#pragma once
#include "CoreMinimal.h"
#include "ELSInAirRotationMode.generated.h"

UENUM(BlueprintType)
enum class ELSInAirRotationMode : uint8 {
    LookingDirection,
    NoRotation,
    AlignToHorizon,
    MovementInput,
    Helicopter,
};

