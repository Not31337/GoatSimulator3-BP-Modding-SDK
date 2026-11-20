#pragma once
#include "CoreMinimal.h"
#include "EGGMediaWatchdogReason.generated.h"

UENUM(BlueprintType)
enum class EGGMediaWatchdogReason : uint8 {
    SkippedOnSteamDeck,
    NeverStarted,
    Stalled,
    Overran,
    PlayerError,
    ForcedByGame,
};

