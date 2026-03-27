#pragma once
#include "CoreMinimal.h"
#include "ERotationPreset.generated.h"

UENUM(BlueprintType)
enum class ERotationPreset : uint8 {
    NoRotation,
    YawOnly,
    Full,
};

