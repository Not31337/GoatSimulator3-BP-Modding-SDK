#pragma once
#include "CoreMinimal.h"
#include "EGGDamageWhileFreezeReaction.generated.h"

UENUM(BlueprintType)
enum class EGGDamageWhileFreezeReaction : uint8 {
    None,
    UnFreeze,
    Explode,
};

