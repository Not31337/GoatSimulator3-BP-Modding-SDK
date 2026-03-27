#pragma once
#include "CoreMinimal.h"
#include "ERuleBoolState.generated.h"

UENUM(BlueprintType)
enum class ERuleBoolState : uint8 {
    Unset,
    SetAndFalse,
    SetAndTrue,
};

