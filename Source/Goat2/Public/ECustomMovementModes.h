#pragma once
#include "CoreMinimal.h"
#include "ECustomMovementModes.generated.h"

UENUM(BlueprintType)
enum ECustomMovementModes {
    CMOVE_None,
    CMOVE_WallRunning,
    CMOVE_Ladder,
    CMOVE_Grinding,
    CMOVE_GodMode,
    CMOVE_External,
    CMOVE_IdleNPC,
    CMOVE_Diving,
    CMOVE_Underground,
};

