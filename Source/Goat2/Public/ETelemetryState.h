#pragma once
#include "CoreMinimal.h"
#include "ETelemetryState.generated.h"

UENUM(BlueprintType)
enum class ETelemetryState : uint8 {
    platform,
    build_cl,
    build_name,
    session_id,
    world_id,
    game_id,
    game_mode,
    anonymous_player_id,
    session_ordinal,
    lobby_id,
    sec_since_launch,
    sec_since_lobby_join,
    sec_since_world_enter,
    build_type,
};

