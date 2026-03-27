#pragma once
#include "CoreMinimal.h"
#include "EGGImpactResult.generated.h"

UENUM(BlueprintType)
enum class EGGImpactResult : uint8 {
    Nothing,
    Push,
    Stumble,
    Ragdoll,
};

