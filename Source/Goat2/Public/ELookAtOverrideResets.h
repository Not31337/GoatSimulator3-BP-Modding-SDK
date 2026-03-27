#pragma once
#include "CoreMinimal.h"
#include "ELookAtOverrideResets.generated.h"

UENUM(BlueprintType)
enum class ELookAtOverrideResets : uint8 {
    LAOR_Ragdoll,
    LAOR_ProximityReact,
    LAOR_ExtremeMood,
    LAOR_Panic,
};

