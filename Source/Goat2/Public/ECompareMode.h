#pragma once
#include "CoreMinimal.h"
#include "ECompareMode.generated.h"

UENUM(BlueprintType)
enum class ECompareMode : uint8 {
    CM_Less,
    CM_LessOrEqual,
    CM_More,
    CM_MoreOrEqual,
    CM_Equal,
};

