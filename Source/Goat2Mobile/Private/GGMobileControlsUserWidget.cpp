#include "GGMobileControlsUserWidget.h"

UGGMobileControlsUserWidget::UGGMobileControlsUserWidget() : UUserWidget(FObjectInitializer::Get()) {
    this->CheatMenuButton = NULL;
    this->DefaultControlsWidget = NULL;
    this->VehicleControlsWidget = NULL;
    this->UFOControlsWidget = NULL;
    this->BikeControlsWidget = NULL;
    this->ContextualTouchWidget = NULL;
    this->BrowsingControlsWidget = NULL;
    this->QuickCommandsWidget = NULL;
    this->PCIntroComponent = NULL;
}

void UGGMobileControlsUserWidget::ResetUI(AGGGoat* OldGoat, AGGGoat* NewGoat) {
}

void UGGMobileControlsUserWidget::OnStoppedBrowsing() {
}

void UGGMobileControlsUserWidget::OnStartedBrowsing(const FText BrowsingText) {
}

void UGGMobileControlsUserWidget::OnNotificationRemovedFromWidget(const FNotification& Notification, UGGNotificationUserWidget* NotificationWidget) {
}

void UGGMobileControlsUserWidget::OnMenuExited_Implementation(UUserWidget* Widget) {
}

void UGGMobileControlsUserWidget::OnMenuEntered_Implementation(UUserWidget* Widget) {
}

void UGGMobileControlsUserWidget::OnLoadingScreenRemoved(AGGPlayerController* Controller, ELoadingScreenType Type, ERemovalReason RemovalReason) {
}

void UGGMobileControlsUserWidget::OnIntroFinished(AGGIntro* Intro) {
}

void UGGMobileControlsUserWidget::OnExitVehicle() const {
}

void UGGMobileControlsUserWidget::OnExitUFO() {
}

void UGGMobileControlsUserWidget::OnEnterVehicle(const AGGVehicle* Vehicle, bool IsDriver, const AGGCharacter* Driver) {
}

void UGGMobileControlsUserWidget::OnEnterUFO() {
}

void UGGMobileControlsUserWidget::OnCinematicUpdated(bool bCinematicFinished) {
}

UImage* UGGMobileControlsUserWidget::GetImageMatchingActionInput(const FName& ActionInput) const {
    return NULL;
}

void UGGMobileControlsUserWidget::CheatMenuButtonPressed() {
}


