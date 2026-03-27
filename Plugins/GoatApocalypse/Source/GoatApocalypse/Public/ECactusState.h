#pragma once
#include "CoreMinimal.h"
#include "ECactusState.generated.h"

UENUM(BlueprintType)
enum class ECactusState : uint8 {
    Idle,
    Regrowing,
    Hidden,
};

