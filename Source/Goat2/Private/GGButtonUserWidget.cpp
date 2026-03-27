#include "GGButtonUserWidget.h"

UGGButtonUserWidget::UGGButtonUserWidget() {
    this->bIsFocusable = true;
    this->bShowFocusMarkerOnHover = true;
    this->ButtonWidget = NULL;
    this->bHoldToInteract = false;
    this->HoldInteractDuration = 1.50f;
    this->HoldAnim = NULL;
    this->ActiveMarker = NULL;
    this->UnreadBadge = NULL;
    this->bAutomaticHoverStyles = false;
    this->bActiveMarkerIsFocusMarker = false;
    this->bActiveOverridesFocusMarkers = false;
    this->bRemoveFocusMarkerOnPress = false;
}

bool UGGButtonUserWidget::WasLastActive() {
    return false;
}

void UGGButtonUserWidget::SetIsActive(bool bActive) {
}

void UGGButtonUserWidget::SetHovered(bool bHovered) {
}

void UGGButtonUserWidget::SetHoldToInteract(bool bInEnabled) {
}

bool UGGButtonUserWidget::RequestButtonInteraction() {
    return false;
}

void UGGButtonUserWidget::RemoveUnreadStatus() {
}





void UGGButtonUserWidget::OnButtonUnhovered() {
}

void UGGButtonUserWidget::OnButtonReleased() {
}

void UGGButtonUserWidget::OnButtonPressed() {
}

void UGGButtonUserWidget::OnButtonHovered() {
}

void UGGButtonUserWidget::OnButtonClicked() {
}

bool UGGButtonUserWidget::IsActive() {
    return false;
}

bool UGGButtonUserWidget::GetHoldToInteract() {
    return false;
}

bool UGGButtonUserWidget::DetermineUnreadStatus_Implementation() {
    return false;
}


