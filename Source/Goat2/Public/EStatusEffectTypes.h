#pragma once
#include "CoreMinimal.h"
#include "EStatusEffectTypes.generated.h"

UENUM(BlueprintType)
enum class EStatusEffectTypes : uint8 {
    SET_None,
    SET_Burning,
    SET_Electric,
    SET_Slippery,
    SET_Bouncy,
    SET_Disgusting,
    SET_Rifted,
    SET_Flattened,
    SET_Frozen,
    SET_All,
};

