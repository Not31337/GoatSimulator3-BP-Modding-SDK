#pragma once
#include "CoreMinimal.h"
#include "EStiffBodypart.generated.h"

UENUM(BlueprintType)
enum class EStiffBodypart : uint8 {
    SB_Chest,
    SB_Head,
    SB_RightArm,
    SB_LeftArm,
    SB_RightLeg,
    SB_LeftLeg,
    SB_BackRightLeg,
    SB_BackLeftLeg,
};

