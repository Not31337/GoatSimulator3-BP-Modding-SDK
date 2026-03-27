#pragma once
#include "CoreMinimal.h"
#include "EGearSlot.generated.h"

UENUM(BlueprintType)
enum class EGearSlot : uint8 {
    GS_None,
    GS_Head,
    GS_Body,
    GS_Back,
    GS_Feet,
    GS_AltGoat,
    GS_Fur,
    GS_Horns,
    GS_Baa,
};

