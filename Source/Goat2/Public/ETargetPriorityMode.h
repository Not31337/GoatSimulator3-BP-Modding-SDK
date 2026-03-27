#pragma once
#include "CoreMinimal.h"
#include "ETargetPriorityMode.generated.h"

UENUM(BlueprintType)
enum class ETargetPriorityMode : uint8 {
    Closest,
    Random,
    Deactivated,
};

