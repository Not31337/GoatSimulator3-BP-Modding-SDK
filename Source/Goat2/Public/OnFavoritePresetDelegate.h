#pragma once
#include "CoreMinimal.h"
#include "OnFavoritePresetDelegate.generated.h"

class UGGGearItemPresetButtonUserWidget;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnFavoritePreset, UGGGearItemPresetButtonUserWidget*, Widget);

