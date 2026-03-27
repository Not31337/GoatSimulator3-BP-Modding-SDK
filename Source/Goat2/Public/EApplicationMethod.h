#pragma once
#include "CoreMinimal.h"
#include "EApplicationMethod.generated.h"

UENUM(BlueprintType)
enum class EApplicationMethod : uint8 {
    AM_Direct,
    AM_Overlap,
    AM_Collision,
};

