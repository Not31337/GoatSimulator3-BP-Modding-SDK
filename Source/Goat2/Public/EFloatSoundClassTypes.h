#pragma once
#include "CoreMinimal.h"
#include "EFloatSoundClassTypes.generated.h"

UENUM(BlueprintType)
enum class EFloatSoundClassTypes : uint8 {
    FSCT_NPC,
    FSCT_Goat,
    FSCT_PActor,
    FSCT_Vehicle,
};

