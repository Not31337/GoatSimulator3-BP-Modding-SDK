#pragma once
#include "CoreMinimal.h"
#include "EGoatAbilitySlot.generated.h"

UENUM(BlueprintType)
enum class EGoatAbilitySlot : uint8 {
    GAS_Headbutt,
    GAS_ChargeHeadbutt,
    GAS_Backkick,
    GAS_Lick = 4,
};

