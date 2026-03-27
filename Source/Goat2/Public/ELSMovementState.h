#pragma once
#include "CoreMinimal.h"
#include "ELSMovementState.generated.h"

UENUM(BlueprintType)
enum class ELSMovementState : uint8 {
    None,
    Grounded,
    InAir,
    Ragdoll,
};

