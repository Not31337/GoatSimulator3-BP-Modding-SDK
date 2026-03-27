#pragma once
#include "CoreMinimal.h"
#include "EResourceSpendType.generated.h"

UENUM(BlueprintType)
enum class EResourceSpendType : uint8 {
    Cheat,
    Gear,
    Nonsense,
};

