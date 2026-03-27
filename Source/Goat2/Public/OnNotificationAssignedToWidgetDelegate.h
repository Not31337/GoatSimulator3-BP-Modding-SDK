#pragma once
#include "CoreMinimal.h"
#include "Notification.h"
#include "OnNotificationAssignedToWidgetDelegate.generated.h"

class UGGNotificationUserWidget;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnNotificationAssignedToWidget, const FNotification&, Notification, UGGNotificationUserWidget*, NotificationWidget);

