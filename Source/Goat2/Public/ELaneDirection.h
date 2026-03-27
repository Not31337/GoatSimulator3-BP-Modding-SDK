#pragma once
#include "CoreMinimal.h"
#include "ELaneDirection.generated.h"

UENUM(BlueprintType)
enum class ELaneDirection : uint8 {
    LD_IndexIncreases,
    LD_IndexDecreases,
};

