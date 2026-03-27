#pragma once
#include "CoreMinimal.h"
#include "EGGEngineScalabilityLevel_WithOff.generated.h"

UENUM(BlueprintType)
enum class EGGEngineScalabilityLevel_WithOff : uint8 {
    Off,
    Low,
    Medium,
    High,
    Epic,
    Cinematic,
};

