#pragma once
#include "CoreMinimal.h"
#include "ESurveillanceCameraState.generated.h"

UENUM(BlueprintType)
enum class ESurveillanceCameraState : uint8 {
    Default,
    Rotating,
    Aiming,
};

