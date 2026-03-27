#pragma once
#include "CoreMinimal.h"
#include "EChaosCounterMode.generated.h"

UENUM(BlueprintType)
enum class EChaosCounterMode : uint8 {
    ECM_AllowAll,
    ECM_RecurringList,
    ECM_Cooldown,
    ECM_RecurringAndCooldown,
};

