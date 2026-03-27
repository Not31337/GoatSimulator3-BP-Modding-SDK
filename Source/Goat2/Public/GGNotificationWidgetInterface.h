#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "Notification.h"
#include "GGNotificationWidgetInterface.generated.h"

class UGGNotificationUserWidget;

UINTERFACE(Blueprintable)
class GOAT2_API UGGNotificationWidgetInterface : public UInterface {
    GENERATED_BODY()
};

class GOAT2_API IGGNotificationWidgetInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void UpdateWidget(FNotification Notification);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ShowWidget(FNotification Notification);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetParentNotificationWidget(UGGNotificationUserWidget* Parent);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void HideWidget();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    float GetWidgetDuration(FNotification Notification);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    float GetStartAnimationDuration(FNotification Notification);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    float GetEndAnimationDuration(FNotification Notification);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ClearWidget();
    
};

