#pragma once
#include "CoreMinimal.h"
#include "EGGLandingpadState.generated.h"

UENUM(BlueprintType)
enum class EGGLandingpadState : uint8 {
    Closed,
    Closing,
    Open,
    Opening,
};

