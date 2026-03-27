#pragma once
#include "CoreMinimal.h"
#include "EGGHelicopterBotState.generated.h"

UENUM(BlueprintType)
enum class EGGHelicopterBotState : uint8 {
    Disabled,
    Accent,
    Gliding,
};

