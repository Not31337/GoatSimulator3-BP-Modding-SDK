#pragma once
#include "CoreMinimal.h"
#include "EGGDerpyModeState.generated.h"

UENUM(BlueprintType)
enum class EGGDerpyModeState : uint8 {
    Disabled,
    SoonDisabled,
    SoonEnabled,
    Enabled,
};

