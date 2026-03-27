#pragma once
#include "CoreMinimal.h"
#include "ERagdollChangePreset.generated.h"

UENUM(BlueprintType)
enum class ERagdollChangePreset : uint8 {
    None,
    ForceStateChange,
    IgnoreMinimalTimeInRagdoll,
    IgnoreMaxVelocity,
};

