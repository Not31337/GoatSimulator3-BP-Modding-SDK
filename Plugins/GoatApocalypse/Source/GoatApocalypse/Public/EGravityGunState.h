#pragma once
#include "CoreMinimal.h"
#include "EGravityGunState.generated.h"

UENUM(BlueprintType)
enum class EGravityGunState : uint8 {
    Idle,
    Holding,
    Charging,
};

