#pragma once
#include "CoreMinimal.h"
#include "OnUnequipPresetDelegate.generated.h"

class UGGGearItemPresetButtonUserWidget;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnUnequipPreset, UGGGearItemPresetButtonUserWidget*, Widget);

