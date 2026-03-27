#pragma once
#include "CoreMinimal.h"
#include "EKeyMappingInputMode.generated.h"

UENUM(BlueprintType)
enum class EKeyMappingInputMode : uint8 {
    InputMode_Current,
    InputMode_All,
    InputMode_Keyboard,
    InputMode_Gamepad,
    InputMode_Mouse,
    InputMode_Touch,
};

