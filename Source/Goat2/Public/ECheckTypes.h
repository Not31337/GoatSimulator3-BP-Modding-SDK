#pragma once
#include "CoreMinimal.h"
#include "ECheckTypes.generated.h"

UENUM(BlueprintType)
enum class ECheckTypes : uint8 {
    CT_NPC,
    CT_Goat,
    CT_PhysicsActor,
    CT_Interactable,
    CT_Vehicle,
};

