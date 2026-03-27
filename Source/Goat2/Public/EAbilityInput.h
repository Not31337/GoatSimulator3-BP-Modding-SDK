#pragma once
#include "CoreMinimal.h"
#include "EAbilityInput.generated.h"

UENUM(BlueprintType)
enum class EAbilityInput : uint8 {
    GearAbility,
    Headbutt,
    Lick,
    Baa,
    Backkick,
    Jump,
    ChargeHeadbutt,
    Passive,
    VehicleAbility = GearAbility,
    Vehicle1 = Headbutt,
    Vehicle2 = Lick,
};

