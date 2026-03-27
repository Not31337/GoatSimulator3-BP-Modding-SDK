#pragma once
#include "CoreMinimal.h"
#include "ESplineSpawnType.generated.h"

UENUM(BlueprintType)
enum class ESplineSpawnType : uint8 {
    SST_Random,
    SST_RandomPoint,
    SST_FollowSpline,
    SST_FollowSplineReverse,
    SST_FollowSplinePoints,
    SST_FollowSplinePointsReverse,
};

