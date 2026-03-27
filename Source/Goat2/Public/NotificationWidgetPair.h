#pragma once
#include "CoreMinimal.h"
#include "Notification.h"
#include "NotificationWidgetPair.generated.h"

class UUserWidget;

USTRUCT(BlueprintType)
struct GOAT2_API FNotificationWidgetPair {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FNotification Notification;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UUserWidget* Widget;
    
    FNotificationWidgetPair();
};

