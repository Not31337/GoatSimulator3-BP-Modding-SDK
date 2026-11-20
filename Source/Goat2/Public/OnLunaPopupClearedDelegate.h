#pragma once
#include "CoreMinimal.h"
#include "OnLunaPopupClearedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnLunaPopupCleared, int32, PlayerSlot);

