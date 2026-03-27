#pragma once
#include "CoreMinimal.h"
#include "EGGEquation.generated.h"

UENUM(BlueprintType)
enum class EGGEquation : uint8 {
    Equal,
    NotEqual,
    Smaller,
    EqualOrSmaller,
    Larger,
    EqualOrLarger,
};

