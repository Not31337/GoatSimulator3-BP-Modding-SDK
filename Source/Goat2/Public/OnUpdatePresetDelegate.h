#pragma once
#include "CoreMinimal.h"
#include "OnUpdatePresetDelegate.generated.h"

class UGGGearItemPresetButtonUserWidget;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnUpdatePreset, UGGGearItemPresetButtonUserWidget*, Widget);

