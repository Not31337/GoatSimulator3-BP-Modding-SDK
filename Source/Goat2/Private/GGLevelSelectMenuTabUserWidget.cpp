#include "GGLevelSelectMenuTabUserWidget.h"

UGGLevelSelectMenuTabUserWidget::UGGLevelSelectMenuTabUserWidget() {
    this->LevelSelectWidgetClass = NULL;
    this->WorldScrollbox = NULL;
    this->WorldSizeBox = NULL;
    this->WorldAutoSizer = NULL;
    this->SpacerAutoSizeMargin = NULL;
    this->CachedFocusedLevelSelect = NULL;
}

void UGGLevelSelectMenuTabUserWidget::OnLobbyUpdated(TEnumAsByte<EGGLobbyUpdateType> LobbyUpdateType) {
}

void UGGLevelSelectMenuTabUserWidget::OnLevelSelectFocused(UGGLevelSelectUserWidget* InLevelSelectWidget) {
}

void UGGLevelSelectMenuTabUserWidget::OnLevelSelectExpanded(UGGLevelSelectUserWidget* InLevelSelectWidget) {
}

void UGGLevelSelectMenuTabUserWidget::OnLeftLobby() {
}

void UGGLevelSelectMenuTabUserWidget::OnJoinedLobby(bool bSuccess) {
}

void UGGLevelSelectMenuTabUserWidget::OnCreatedLobby(bool bSuccess) {
}

UWidget* UGGLevelSelectMenuTabUserWidget::HandleLevelWidgetNavigation(EUINavigation InNavigation) {
    return NULL;
}

void UGGLevelSelectMenuTabUserWidget::ForceMaintainFocus() {
}


