#pragma once
#include "CoreMinimal.h"
#include "EHasDurationOverride.generated.h"

UENUM(BlueprintType)
enum class EHasDurationOverride : uint8 {
    HDO_Default,
    HDO_NoDuration,
    HDO_HasDuration,
};

