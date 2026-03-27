#pragma once
#include "CoreMinimal.h"
#include "OnPreviewPresetDelegate.generated.h"

class UGGGearItemPresetButtonUserWidget;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnPreviewPreset, UGGGearItemPresetButtonUserWidget*, Widget);

