#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "Notification.h"
#include "OnNotificationDispatchedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnNotificationDispatched, FGameplayTag, Tag, FNotification, Notification);

