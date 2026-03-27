#pragma once
#include "CoreMinimal.h"
#include "OnSlowMotionToggledDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnSlowMotionToggled, bool, bEnabled);

