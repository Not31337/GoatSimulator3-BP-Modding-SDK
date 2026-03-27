#pragma once
#include "CoreMinimal.h"
#include "EHeadTurning.generated.h"

UENUM(BlueprintType)
enum class EHeadTurning : uint8 {
    HT_None,
    HT_TurnAndLook,
    HT_UpperBody,
};

