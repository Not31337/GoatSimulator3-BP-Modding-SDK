#pragma once
#include "CoreMinimal.h"
#include "EGGBeeSwarmStateType.generated.h"

UENUM(BlueprintType)
enum class EGGBeeSwarmStateType : uint8 {
    None,
    FollowingOwner,
    AttachedToOwner,
    FollowingTarget,
    AttackingTarget,
};

