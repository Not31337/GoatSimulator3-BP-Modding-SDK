#pragma once
#include "CoreMinimal.h"
#include "ELSStance.generated.h"

UENUM(BlueprintType)
enum class ELSStance : uint8 {
    Standing,
    Crouching,
    Prone,
};

