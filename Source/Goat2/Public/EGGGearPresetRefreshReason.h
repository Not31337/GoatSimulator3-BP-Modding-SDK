#pragma once
#include "CoreMinimal.h"
#include "EGGGearPresetRefreshReason.generated.h"

UENUM(BlueprintType)
enum class EGGGearPresetRefreshReason : uint8 {
    None,
    CreateList,
    AddPreset,
    DeletePreset,
    ToggleFavorite,
    EquippedPreset,
    SortList,
};

