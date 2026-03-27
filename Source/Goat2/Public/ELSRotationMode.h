#pragma once
#include "CoreMinimal.h"
#include "ELSRotationMode.generated.h"

UENUM(BlueprintType)
enum class ELSRotationMode : uint8 {
    VelocityDirection,
    LookingDirection,
    Aiming,
    FixedDirection,
};

