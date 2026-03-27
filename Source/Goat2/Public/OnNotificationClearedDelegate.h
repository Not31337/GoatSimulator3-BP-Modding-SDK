#pragma once
#include "CoreMinimal.h"
#include "Notification.h"
#include "OnNotificationClearedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnNotificationCleared, FNotification, Notification);

