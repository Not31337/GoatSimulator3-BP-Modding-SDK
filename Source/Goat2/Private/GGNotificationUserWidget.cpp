#include "GGNotificationUserWidget.h"

UGGNotificationUserWidget::UGGNotificationUserWidget() {
    this->ParentWidgetClassesDataTable = NULL;
    this->bCanUseCachedRuleset = true;
}



bool UGGNotificationUserWidget::ShouldClearQueue_Implementation(FNotification Notification) {
    return false;
}

void UGGNotificationUserWidget::PurgeWidget() {
}

void UGGNotificationUserWidget::OnNotificationDispatched(FGameplayTag Tag, FNotification Notification) {
}

bool UGGNotificationUserWidget::IsWidgetReady_Implementation(FNotification Notification) {
    return false;
}


void UGGNotificationUserWidget::HideWidget(ENotificationRemovalReason Reason) {
}

float UGGNotificationUserWidget::GetWidgetDurationExplicit(UUserWidget* Widget, FNotification Notification, TEnumAsByte<ENotificationDurationType::Type> Type) {
    return 0.0f;
}

bool UGGNotificationUserWidget::GetCurrentNotificationMatchesID(const FString& NotificationID) {
    return false;
}


void UGGNotificationUserWidget::ClearWidget(ENotificationRemovalReason Reason) {
}


