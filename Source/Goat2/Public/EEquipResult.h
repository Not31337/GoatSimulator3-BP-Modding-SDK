#pragma once
#include "CoreMinimal.h"
#include "EEquipResult.generated.h"

UENUM(BlueprintType)
enum class EEquipResult : uint8 {
    None,
    Equipped,
    Unequipped,
    Unlocked,
    UnlockedFailed,
    StyleSelect,
    NoChange,
    Error,
};

