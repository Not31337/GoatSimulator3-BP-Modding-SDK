#pragma once
#include "CoreMinimal.h"
#include "EGGSnapMode.generated.h"

UENUM(BlueprintType)
enum class EGGSnapMode : uint8 {
    EntityLocation,
    BoundsCenter,
    BoundsBottom,
};

