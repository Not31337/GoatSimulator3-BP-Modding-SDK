#include "GGMobileQuickCommandsUI.h"

UGGMobileQuickCommandsUI::UGGMobileQuickCommandsUI() {
    this->QuickCommandsScaleBox = NULL;
    this->PauseButton = NULL;
    this->PauseButtonOutline = NULL;
    this->SettingsButton = NULL;
    this->SlowMotionButton = NULL;
    this->PauseButtonTeleportMinTouchTime = 0.15f;
    this->PauseButtonTeleportLineMaterialStartValue = 0.10f;
    this->PauseButtonTeleportLineMaterialEndValue = -1.00f;
    this->BaseUserWidget = NULL;
    this->DefaultControlsWidget = NULL;
    this->PauseButtonOutlineDynamicMaterial = NULL;
}

void UGGMobileQuickCommandsUI::SettingsButtonPressed() {
}

void UGGMobileQuickCommandsUI::PauseButtonReleased() {
}

void UGGMobileQuickCommandsUI::PauseButtonPressed() {
}

void UGGMobileQuickCommandsUI::OnToggleCinematicUIVisibility(bool bVisibility) {
}

void UGGMobileQuickCommandsUI::OnQuestDiscovered(float SplashDuration) {
}

void UGGMobileQuickCommandsUI::OnLobbyUpdate(TEnumAsByte<EGGLobbyUpdateType> LobbyUpdateType) {
}

void UGGMobileQuickCommandsUI::OnEnterExitDamCannon(bool bIsInsideCannon) {
}


