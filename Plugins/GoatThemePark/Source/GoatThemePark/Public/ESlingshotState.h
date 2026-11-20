#pragma once
#include "CoreMinimal.h"
#include "ESlingshotState.generated.h"

UENUM(BlueprintType)
enum class ESlingshotState : uint8 {
    None,
    Default,
    Spawning,
    InUse,
    InLaunchProjectile,
    Despawning,
};

