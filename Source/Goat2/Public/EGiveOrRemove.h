#pragma once
#include "CoreMinimal.h"
#include "EGiveOrRemove.generated.h"

UENUM(BlueprintType)
enum class EGiveOrRemove : uint8 {
    GOR_Give,
    GOR_Remove,
};

