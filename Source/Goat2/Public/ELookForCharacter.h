#pragma once
#include "CoreMinimal.h"
#include "ELookForCharacter.generated.h"

UENUM(BlueprintType)
enum class ELookForCharacter : uint8 {
    LFC_Goat,
    LFC_NPC,
    LFC_Both,
};

