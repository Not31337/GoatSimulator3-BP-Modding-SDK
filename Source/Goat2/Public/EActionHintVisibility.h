#pragma once
#include "CoreMinimal.h"
#include "EActionHintVisibility.generated.h"

UENUM(BlueprintType)
enum class EActionHintVisibility : uint8 {
    Always,
    Keyboard,
    Gamepad,
    Mobile,
    Context,
};

