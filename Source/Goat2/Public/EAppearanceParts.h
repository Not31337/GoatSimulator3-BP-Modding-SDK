#pragma once
#include "CoreMinimal.h"
#include "EAppearanceParts.generated.h"

UENUM(BlueprintType)
enum class EAppearanceParts : uint8 {
    AP_None,
    AP_Head,
    AP_Hair,
    AP_UpperBody,
    AP_LowerBody,
    AP_Accessory,
};

