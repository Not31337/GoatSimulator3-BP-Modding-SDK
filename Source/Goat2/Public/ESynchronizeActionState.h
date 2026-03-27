#pragma once
#include "CoreMinimal.h"
#include "ESynchronizeActionState.generated.h"

UENUM(BlueprintType)
enum class ESynchronizeActionState : uint8 {
    None,
    GatherGoats,
    ReadyToSynchronize,
    Synchronizing,
    Synchronized,
};

