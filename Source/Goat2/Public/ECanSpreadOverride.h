#pragma once
#include "CoreMinimal.h"
#include "ECanSpreadOverride.generated.h"

UENUM(BlueprintType)
enum class ECanSpreadOverride : uint8 {
    CSO_Default,
    CSO_CannotSpread,
    CSO_CanSpread,
};

