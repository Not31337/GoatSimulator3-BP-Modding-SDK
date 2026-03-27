#pragma once
#include "CoreMinimal.h"
#include "EActorSpawnRotationType.generated.h"

UENUM(BlueprintType)
enum class EActorSpawnRotationType : uint8 {
    ASRT_WithRotation,
    ASRT_PawnRotation,
    ASRT_RandomRotation,
};

