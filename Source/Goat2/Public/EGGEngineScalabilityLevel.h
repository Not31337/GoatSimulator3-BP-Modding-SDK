#pragma once
#include "CoreMinimal.h"
#include "EGGEngineScalabilityLevel.generated.h"

UENUM(BlueprintType)
enum class EGGEngineScalabilityLevel : uint8 {
    Low,
    Medium,
    High,
    Epic,
    Cinematic,
};

