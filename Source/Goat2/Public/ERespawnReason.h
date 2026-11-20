#pragma once
#include "CoreMinimal.h"
#include "ERespawnReason.generated.h"

UENUM(BlueprintType)
enum class ERespawnReason : uint8 {
    Manual,
    RespawnButton,
    Cheat,
    KillZ,
    WorldBounds,
    VehicleKillZ,
    TeleportAreaBounds,
    ApocalypseBounds,
};

