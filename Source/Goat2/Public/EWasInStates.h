#pragma once
#include "CoreMinimal.h"
#include "EWasInStates.generated.h"

UENUM(BlueprintType)
enum class EWasInStates : uint8 {
    WIS_None,
    WIS_WasInEvent,
    WIS_WasPanicking,
    WIS_WasActorInteracting,
    WIS_WasRagdolling,
    WIS_WasInMood,
    WIS_WasInIdleState,
    WIS_WasForcedToMove,
    WIS_WasInLostObject,
    WIS_WasInvestigating,
    WIS_WasCharInteracting,
    WIS_WasStumbling,
};

