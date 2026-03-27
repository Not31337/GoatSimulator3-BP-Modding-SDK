#pragma once
#include "CoreMinimal.h"
#include "UpdateNotificationData.h"
#include "OnNotificationPopupClosedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnNotificationPopupClosed, FUpdateNotificationData, Data);

