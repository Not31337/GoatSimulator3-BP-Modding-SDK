#pragma once
#include "CoreMinimal.h"
#include "EPartyHornState.generated.h"

UENUM(BlueprintType)
enum class EPartyHornState : uint8 {
    Default,
    Unwrapping,
    Blowing,
    Wrapping,
};

