#pragma once
#include "CoreMinimal.h"
#include "EGGSplineAlignment.generated.h"

UENUM(BlueprintType)
enum class EGGSplineAlignment : uint8 {
    SplineTangentAtMeshStart,
    SplineTangentAtMeshMiddle,
    FollowSpline,
};

