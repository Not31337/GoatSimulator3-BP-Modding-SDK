#pragma once
#include "CoreMinimal.h"
#include "OnLunaPopupShownDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnLunaPopupShown, int32, PlayerSlot);

