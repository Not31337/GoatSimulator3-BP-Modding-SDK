#pragma once
#include "CoreMinimal.h"
#include "EValidForForceDamage.generated.h"

UENUM(BlueprintType)
enum class EValidForForceDamage : uint8 {
    Goat,
    NPC,
    Vehicle,
    Destructible,
    PhysActor,
};

