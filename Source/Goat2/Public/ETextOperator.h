#pragma once
#include "CoreMinimal.h"
#include "ETextOperator.generated.h"

UENUM(BlueprintType)
enum class ETextOperator : uint8 {
    StartsWith,
    Equals,
    Contains,
};

