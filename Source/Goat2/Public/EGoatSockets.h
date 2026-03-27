#pragma once
#include "CoreMinimal.h"
#include "EGoatSockets.generated.h"

UENUM(BlueprintType)
enum class EGoatSockets : uint8 {
    GS_None,
    GS_HeadGearSocket,
    GS_EyewearGearSocket,
    GS_ShoulderGearSocket,
    GS_BackGearSocket,
    GS_BodyGearSocket,
    GS_FeetGear_FrontRSocket,
    GS_HornGearSocket,
};

