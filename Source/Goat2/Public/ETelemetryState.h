#pragma once
#include "CoreMinimal.h"
#include "ETelemetryState.generated.h"

UENUM(BlueprintType)
enum class ETelemetryState : uint8 {
    build_cl,
    build_name,
    world_id,
    game_mode,
    hardware_info,
    graphics_settings,
};

