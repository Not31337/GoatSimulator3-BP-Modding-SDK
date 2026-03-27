#pragma once
#include "CoreMinimal.h"
#include "ENewsTabNavigationOverflowMode.generated.h"

UENUM(BlueprintType)
enum class ENewsTabNavigationOverflowMode : uint8 {
    PushFirst,
    ShiftCenter,
    StartFromBeginning,
};

