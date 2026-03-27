#pragma once
#include "CoreMinimal.h"
#include "EGGLerpType.generated.h"

UENUM(BlueprintType)
enum class EGGLerpType : uint8 {
    Linear,
    Exponential,
    ExponentialDecay,
};

