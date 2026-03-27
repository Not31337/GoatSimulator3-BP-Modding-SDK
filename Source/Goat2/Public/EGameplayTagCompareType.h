#pragma once
#include "CoreMinimal.h"
#include "EGameplayTagCompareType.generated.h"

UENUM(BlueprintType)
enum class EGameplayTagCompareType : uint8 {
    GTCT_HasTagExact,
    GTCT_HasTag,
};

