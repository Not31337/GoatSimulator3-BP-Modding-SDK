#pragma once
#include "CoreMinimal.h"
#include "EFollowMode.generated.h"

UENUM(BlueprintType)
enum class EFollowMode : uint8 {
    None,
    Kinematic,
    MovementInput,
};

