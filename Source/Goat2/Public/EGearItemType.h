#pragma once
#include "CoreMinimal.h"
#include "EGearItemType.generated.h"

UENUM(BlueprintType)
enum class EGearItemType : uint8 {
    Gear,
    None,
    Store,
};

