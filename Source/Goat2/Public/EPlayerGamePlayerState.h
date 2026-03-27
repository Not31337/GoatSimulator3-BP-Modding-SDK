#pragma once
#include "CoreMinimal.h"
#include "EPlayerGamePlayerState.generated.h"

UENUM(BlueprintType)
namespace EPlayerGamePlayerState {
    enum Type {
        Alive,
        Dead,
        Left,
        Tied,
        Winner,
    };
}

