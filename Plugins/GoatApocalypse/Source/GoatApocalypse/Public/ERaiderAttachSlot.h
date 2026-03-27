#pragma once
#include "CoreMinimal.h"
#include "ERaiderAttachSlot.generated.h"

UENUM(BlueprintType)
enum class ERaiderAttachSlot : uint8 {
    RAS_Roof,
    RAS_Hood,
    RAS_LeftSide,
    RAS_RightSide,
};

