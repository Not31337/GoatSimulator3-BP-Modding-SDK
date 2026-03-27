#pragma once
#include "CoreMinimal.h"
#include "ERockRampState.generated.h"

UENUM()
enum class ERockRampState : int32 {
    Default,
    ParticleTraveling,
    Spawning,
    Spawned,
    Despawning,
};

