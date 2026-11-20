#pragma once
#include "CoreMinimal.h"
#include "EGGSplineMeshSnapMode.generated.h"

UENUM(BlueprintType)
enum class EGGSplineMeshSnapMode : uint8 {
    Location,
    BoundsCenter,
    BoundsBottom,
};

