#pragma once
#include "CoreMinimal.h"
#include "EGGTentacleState.generated.h"

UENUM(BlueprintType)
enum class EGGTentacleState : uint8 {
    Idle,
    Slap,
    Grab,
};

