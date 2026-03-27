#pragma once
#include "CoreMinimal.h"
#include "ETypeOfDamage.generated.h"

UENUM(BlueprintType)
enum class ETypeOfDamage : uint8 {
    TOD_None,
    TOD_Goat,
    TOD_NPC,
    TOD_PhysActor,
    TOD_Vehicle,
    TOD_Explosion,
    TOD_Burning,
    TOD_Electric,
    TOD_GoatTackle,
    TOD_AttachedActor,
    TOD_GoatGear,
    TOD_Impact,
};

