#pragma once
#include "CoreMinimal.h"
#include "EGGInstinctPerfectLandingState.generated.h"

UENUM(BlueprintType)
enum class EGGInstinctPerfectLandingState : uint8 {
    NotStarted,
    OnHead,
    Falling,
};

