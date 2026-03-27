#pragma once
#include "CoreMinimal.h"
#include "EGGTheCuberState.generated.h"

UENUM(BlueprintType)
enum class EGGTheCuberState : uint8 {
    Idle,
    CatchingTarget,
    ConvertingTarget,
    ReleasingTarget,
};

