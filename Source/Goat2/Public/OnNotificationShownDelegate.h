#pragma once
#include "CoreMinimal.h"
#include "Notification.h"
#include "OnNotificationShownDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnNotificationShown, FNotification, Notification);

