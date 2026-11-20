#pragma once
#include "CoreMinimal.h"
#include "EGGCheckoutOrigin.generated.h"

UENUM(BlueprintType)
enum class EGGCheckoutOrigin : uint8 {
    Unknown,
    DLCShop,
    UpsellPopup,
    LevelSelect,
    SettingsOST,
    Cheat,
};

