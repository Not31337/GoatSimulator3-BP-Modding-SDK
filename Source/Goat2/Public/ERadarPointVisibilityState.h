#pragma once
#include "CoreMinimal.h"
#include "ERadarPointVisibilityState.generated.h"

UENUM(BlueprintType)
enum class ERadarPointVisibilityState : uint8 {
    Undefined,
    Invalid,
    NotRelevant,
    InvalidPosition,
    OutOfRange,
    OutOfSight,
    WaitingForReveal,
    Revealed,
    Valid,
};

