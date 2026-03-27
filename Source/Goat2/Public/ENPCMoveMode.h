#pragma once
#include "CoreMinimal.h"
#include "ENPCMoveMode.generated.h"

UENUM(BlueprintType)
enum class ENPCMoveMode : uint8 {
    NMM_Walking,
    NMM_Running,
};

