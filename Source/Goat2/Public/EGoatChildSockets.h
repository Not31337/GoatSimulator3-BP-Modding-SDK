#pragma once
#include "CoreMinimal.h"
#include "EGoatChildSockets.generated.h"

UENUM(BlueprintType)
enum class EGoatChildSockets : uint8 {
    GS_None,
    GS_HeadGearSocket,
    GS_EyewearGearSocket,
    GS_ShoulderGearSocket,
    GS_BackGearSocket,
    GS_BodyGearSocket,
    GS_FeetGear_FrontRSocket,
    GS_FeetGear_FrontLSocket,
    GS_FeetGear_BackRSocket,
    GS_FeetGear_BackLSocket,
    GS_HornGearSocket,
};

