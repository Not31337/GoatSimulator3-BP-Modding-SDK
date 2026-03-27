#pragma once
#include "CoreMinimal.h"
#include "EVehicleCrashType.generated.h"

UENUM(BlueprintType)
enum class EVehicleCrashType : uint8 {
    VCT_Other,
    VCT_Character,
};

