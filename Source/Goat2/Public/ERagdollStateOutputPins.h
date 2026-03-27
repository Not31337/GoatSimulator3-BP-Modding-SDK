#pragma once
#include "CoreMinimal.h"
#include "ERagdollStateOutputPins.generated.h"

UENUM(BlueprintType)
enum class ERagdollStateOutputPins : uint8 {
    IsRagdoll,
    IsNotRagdoll,
    NotACharacter,
};

