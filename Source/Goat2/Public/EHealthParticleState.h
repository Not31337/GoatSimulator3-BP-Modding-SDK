#pragma once
#include "CoreMinimal.h"
#include "EHealthParticleState.generated.h"

UENUM(BlueprintType)
enum class EHealthParticleState : uint8 {
    HPS_None,
    HPS_LowHealth,
    HPS_OnFire,
};

