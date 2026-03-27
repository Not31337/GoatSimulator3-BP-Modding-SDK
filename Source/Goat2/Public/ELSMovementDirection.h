#pragma once
#include "CoreMinimal.h"
#include "ELSMovementDirection.generated.h"

UENUM(BlueprintType)
enum class ELSMovementDirection : uint8 {
    Forward,
    Backwards,
    Left,
    Right,
};

