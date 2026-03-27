#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "GameplayTagContainer.h"
#include "AdvancedNotificationTagRuleset.h"
#include "ENotificationDurationType.h"
#include "ENotificationRemovalReason.h"
#include "GGUserWidget.h"
#include "Notification.h"
#include "NotificationWidgetTagRuleset.h"
#include "GGNotificationUserWidget.generated.h"

class UDataTable;
class UUserWidget;

UCLASS(Blueprintable, EditInlineNew)
class GOAT2_API UGGNotificationUserWidget : public UGGUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* ParentWidgetClassesDataTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer IncludedTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer ExcludedTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer IgnoredContentTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAdvancedNotificationTagRuleset AdvancedRules;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCanUseCachedRuleset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FNotificationWidgetTagRuleset CachedWidgetContainerRuleset;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FNotification CurrentNotification;
    
public:
    UGGNotificationUserWidget();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateWidgetBlueprint(FNotification Notification);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ShowWidgetBlueprint(FNotification Notification);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool ShouldClearQueue(FNotification Notification);
    
public:
    UFUNCTION(BlueprintCallable)
    void PurgeWidget();
    
    UFUNCTION(BlueprintCallable)
    void OnNotificationDispatched(FGameplayTag Tag, FNotification Notification);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    bool IsWidgetReady(FNotification Notification);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void HideWidgetBlueprint();
    
    UFUNCTION(BlueprintCallable)
    void HideWidget(ENotificationRemovalReason Reason);
    
    UFUNCTION(BlueprintCallable)
    float GetWidgetDurationExplicit(UUserWidget* Widget, FNotification Notification, TEnumAsByte<ENotificationDurationType::Type> Type);
    
    UFUNCTION(BlueprintCallable)
    bool GetCurrentNotificationMatchesID(const FString& NotificationID);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ClearWidgetBlueprint();
    
    UFUNCTION(BlueprintCallable)
    void ClearWidget(ENotificationRemovalReason Reason);
    
};

