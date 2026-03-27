#pragma once
#include "CoreMinimal.h"
#include "ECustomizationMode.h"
#include "OnCustomizationModeChangedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnCustomizationModeChanged, ECustomizationMode, CustomizationMode);

