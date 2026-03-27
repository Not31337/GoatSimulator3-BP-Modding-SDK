#pragma once
#include "CoreMinimal.h"
#include "EGGVehicleCameraFollow.generated.h"

UENUM(BlueprintType)
enum class EGGVehicleCameraFollow : uint8 {
    FollowWhenUsingGamepad,
    AlwaysFollow,
    NeverFollow,
};

