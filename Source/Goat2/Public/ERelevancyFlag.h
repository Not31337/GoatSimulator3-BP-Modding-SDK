#pragma once
#include "CoreMinimal.h"
#include "ERelevancyFlag.generated.h"

UENUM(BlueprintType)
enum class ERelevancyFlag : uint8 {
    NONE,
    COMPASS,
    MAP,
    TRACKER = 4,
};

