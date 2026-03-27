#pragma once
#include "CoreMinimal.h"
#include "EWaitType.generated.h"

UENUM(BlueprintType)
enum class EWaitType : uint8 {
    WT_Default,
    WT_BlackboardKey,
    WT_FloatBBEntries,
    WT_StandupDelay,
    WT_AnimStartWait,
};

