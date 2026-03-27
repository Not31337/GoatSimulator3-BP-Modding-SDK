#pragma once
#include "CoreMinimal.h"
#include "EInputMode.generated.h"

UENUM(BlueprintType)
enum class EInputMode : uint8 {
    IM_Unknown,
    IM_GameAndUI,
    IM_UIOnly,
    IM_GameOnly,
};

