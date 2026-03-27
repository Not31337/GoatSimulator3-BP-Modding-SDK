#pragma once
#include "CoreMinimal.h"
#include "EPlayerGamePlayerLobbyState.generated.h"

UENUM(BlueprintType)
namespace EPlayerGamePlayerLobbyState {
    enum Type {
        Waiting,
        Accepted,
        Declined,
    };
}

