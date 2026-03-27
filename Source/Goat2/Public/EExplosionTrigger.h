#pragma once
#include "CoreMinimal.h"
#include "EExplosionTrigger.generated.h"

UENUM(BlueprintType)
enum class EExplosionTrigger : uint8 {
    ET_Yes,
    ET_WithTimer,
    ET_No,
};

