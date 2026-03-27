#pragma once
#include "CoreMinimal.h"
#include "EWIPickType.generated.h"

UENUM(BlueprintType)
enum class EWIPickType : uint8 {
    WIPT_WaypointA,
    WIPT_WaypointArrayA,
    WIPT_SingleRandom,
    WIPT_InOrder,
};

