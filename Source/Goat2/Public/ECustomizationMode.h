#pragma once
#include "CoreMinimal.h"
#include "ECustomizationMode.generated.h"

UENUM(BlueprintType)
enum class ECustomizationMode : uint8 {
    Overview,
    Featured,
    Customization,
    Store,
    Presets,
    DLCShop,
};

