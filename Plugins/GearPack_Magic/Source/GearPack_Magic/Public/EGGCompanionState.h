#pragma once
#include "CoreMinimal.h"
#include "EGGCompanionState.generated.h"

UENUM(BlueprintType)
enum class EGGCompanionState : uint8 {
    Idle,
    Takeoff,
    Landing,
    SitOnOwningGoat,
    ReturnToOwningGoat,
    CircleOwningGoat,
    FlyingToTarget,
    ReturningWithTarget,
    FlyUpWithTarget,
    Ragdolled,
};

