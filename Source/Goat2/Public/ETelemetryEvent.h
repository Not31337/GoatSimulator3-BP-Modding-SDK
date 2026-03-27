#pragma once
#include "CoreMinimal.h"
#include "ETelemetryEvent.generated.h"

UENUM(BlueprintType)
enum class ETelemetryEvent : uint8 {
    game_start,
    game_stop,
    item_rewarded,
    item_bought,
    item_equipped,
    minigame_played,
    area_entered,
    area_left,
    event_discovered,
    event_completed,
    castle_goal_unlocked,
    castle_boss_phase_started,
    castle_boss_phase_completed,
    trinket_found,
    ramp_jumped,
    performance_report,
    network_failure,
    client_travel,
};

