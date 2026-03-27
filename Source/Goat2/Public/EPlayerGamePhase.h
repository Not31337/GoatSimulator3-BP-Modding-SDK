#pragma once
#include "CoreMinimal.h"
#include "EPlayerGamePhase.generated.h"

UENUM(BlueprintType)
namespace EPlayerGamePhase {
    enum Type {
        WaitingForPlayers,
        GetReadyPhase,
        PreGame,
        InGame,
        PostGame,
        DrawPhase,
        ResultPhase,
        DestructGame,
    };
}

