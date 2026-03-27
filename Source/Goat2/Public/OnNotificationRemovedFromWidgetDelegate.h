#pragma once
#include "CoreMinimal.h"
#include "Notification.h"
#include "OnNotificationRemovedFromWidgetDelegate.generated.h"

class UGGNotificationUserWidget;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnNotificationRemovedFromWidget, const FNotification&, Notification, UGGNotificationUserWidget*, NotificationWidget);

