#pragma once
#include "CoreMinimal.h"
#include "EGrabbedCharacterAnimationType.generated.h"

UENUM(BlueprintType)
enum class EGrabbedCharacterAnimationType : uint8 {
    NGCA_Default,
    NGCA_Hug,
    NGCA_OneHandInfront,
};

