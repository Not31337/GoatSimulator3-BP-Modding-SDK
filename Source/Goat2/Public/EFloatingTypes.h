#pragma once
#include "CoreMinimal.h"
#include "EFloatingTypes.generated.h"

UENUM(BlueprintType)
enum class EFloatingTypes : uint8 {
    FT_Character,
    FT_RagdolledCharacter,
    FT_PActor,
    FT_Vehicle,
};

