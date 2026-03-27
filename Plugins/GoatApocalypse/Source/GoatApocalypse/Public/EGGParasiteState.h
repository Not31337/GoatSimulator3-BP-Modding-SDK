#pragma once
#include "CoreMinimal.h"
#include "EGGParasiteState.generated.h"

UENUM(BlueprintType)
enum class EGGParasiteState : uint8 {
    Idle,
    TrackingTarget,
    GrabbingTarget,
    EatingTarget,
    Recovering,
    ReleasingEatenTargets,
};

