#pragma once
#include "CoreMinimal.h"
#include "EPlayerGameOutcome.generated.h"

UENUM(BlueprintType)
namespace EPlayerGameOutcome {
    enum Type {
        Invalid,
        Canceled,
        AllLost,
        Draw,
        Walkover,
        Winner,
    };
}

