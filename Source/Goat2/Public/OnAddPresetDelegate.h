#pragma once
#include "CoreMinimal.h"
#include "OnAddPresetDelegate.generated.h"

class UGGGearItemPresetButtonUserWidget;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnAddPreset, UGGGearItemPresetButtonUserWidget*, Widget);

