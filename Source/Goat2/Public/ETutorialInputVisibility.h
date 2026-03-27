#pragma once
#include "CoreMinimal.h"
#include "ETutorialInputVisibility.generated.h"

UENUM(BlueprintType)
enum class ETutorialInputVisibility : uint8 {
    Always,
    Keyboard,
    Gamepad,
};

