#pragma once
#include "CoreMinimal.h"
#include "EMoodSetType.generated.h"

UENUM(BlueprintType)
enum class EMoodSetType : uint8 {
    MST_Default,
    MST_RandomMood,
    MST_BlackboardKey,
    MST_AngryWithTarget,
    MST_FleeFromLoc,
};

