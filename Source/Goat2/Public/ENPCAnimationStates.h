#pragma once
#include "CoreMinimal.h"
#include "ENPCAnimationStates.generated.h"

UENUM(BlueprintType)
enum class ENPCAnimationStates : uint8 {
    NAS_None,
    NAS_Custom,
    NAS_Talking,
    NAS_Admiring,
    NAS_Dancing,
    NAS_Scared,
    NAS_Ranting,
    NAS_GoatRiding,
    NAS_Pointing,
    NAS_Stumbling,
};

