#pragma once
#include "CoreMinimal.h"
#include "EStretchGoalStates.generated.h"

UENUM(BlueprintType)
enum class EStretchGoalStates : uint8 {
    SGIS_Inactive,
    SGIS_BeingRevealed,
    SGIS_Unlockable,
    SGIS_Unlocking,
    SGIS_Unlocked,
};

