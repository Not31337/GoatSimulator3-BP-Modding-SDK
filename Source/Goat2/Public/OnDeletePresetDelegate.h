#pragma once
#include "CoreMinimal.h"
#include "OnDeletePresetDelegate.generated.h"

class UGGGearItemPresetButtonUserWidget;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnDeletePreset, UGGGearItemPresetButtonUserWidget*, Widget);

