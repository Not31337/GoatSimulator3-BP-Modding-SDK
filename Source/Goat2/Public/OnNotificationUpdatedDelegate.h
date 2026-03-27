#pragma once
#include "CoreMinimal.h"
#include "Notification.h"
#include "OnNotificationUpdatedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnNotificationUpdated, FNotification, Notification);

