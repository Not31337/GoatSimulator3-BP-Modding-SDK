#pragma once
#include "CoreMinimal.h"
#include "ETopBarButtonVisibility.generated.h"

UENUM(BlueprintType)
enum class ETopBarButtonVisibility : uint8 {
    Enabled,
    Disabled,
    Hidden,
    None,
};

