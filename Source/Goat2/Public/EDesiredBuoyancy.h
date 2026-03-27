#pragma once
#include "CoreMinimal.h"
#include "EDesiredBuoyancy.generated.h"

UENUM(BlueprintType)
enum class EDesiredBuoyancy : uint8 {
    Negative,
    Neutral,
    Positive,
};

