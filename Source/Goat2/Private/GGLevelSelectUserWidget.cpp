#include "GGLevelSelectUserWidget.h"

UGGLevelSelectUserWidget::UGGLevelSelectUserWidget() {
    this->LevelSelectMenu = NULL;
    this->InitialStateAnimationTime = 0.05f;
    this->LevelNameLabel = NULL;
    this->LevelBackground = NULL;
    this->LevelLockIcon = NULL;
    this->LevelSelectPurchaseButton = NULL;
    this->LevelSelectMoreInfoButton = NULL;
    this->WidgetSwitcherOwning = NULL;
    this->VerticalBoxOwnedItems = NULL;
    this->WidgetSwitcher_NotOwned = NULL;
    this->VerticalBoxNonOwnedOptions = NULL;
    this->OverlayMain = NULL;
    this->OverlayOwned = NULL;
    this->OverlayNotOwned = NULL;
    this->OverlayAllShouldHaveDLC = NULL;
    this->AllShouldHaveDLCLabel = NULL;
    this->NewDLCLabel = NULL;
    this->LevelSelectSaveButton0 = NULL;
    this->LevelSelectSaveButton1 = NULL;
    this->LevelSelectSaveButton2 = NULL;
    this->ShowNonOwnedOptions = NULL;
    this->ScaleDown = NULL;
    this->ScaleDownMore = NULL;
}

void UGGLevelSelectUserWidget::PlayScaleUpAnimation() {
}

void UGGLevelSelectUserWidget::PlayScaleDownAnimation(float InStartTime, float InEndTime, TEnumAsByte<EUMGSequencePlayMode::Type> InPlayMode) {
}

bool UGGLevelSelectUserWidget::OwnsDLC() {
    return false;
}

void UGGLevelSelectUserWidget::OnOffersUpdated() {
}

void UGGLevelSelectUserWidget::OnLevelSelectPurchaseButtonInteracted(UGGUserWidget* Widget, FPointerEvent PointerEvent, FKeyEvent KeyEvent) {
}

void UGGLevelSelectUserWidget::OnLevelSelectMoreInfoButtonInteracted(UGGUserWidget* Widget, FPointerEvent PointerEvent, FKeyEvent KeyEvent) {
}

void UGGLevelSelectUserWidget::OnLevelSaveDeleteRequested(UGGLevelSelectSaveUserWidget* InLevelSelectSaveWidget) {
}

void UGGLevelSelectUserWidget::OnLevelSaveButtonInteracted(UGGUserWidget* Widget, FPointerEvent PointerEvent, FKeyEvent KeyEvent) {
}

void UGGLevelSelectUserWidget::OnLevelFocused(UGGButtonUserWidget* FocusedLevel) {
}

void UGGLevelSelectUserWidget::OnDLCsUpdated() {
}

void UGGLevelSelectUserWidget::OnDLCNotOwnedResponse(const FString& ID, UObject* Object, const FString& ButtonID, EPopupResponse Response) {
}

void UGGLevelSelectUserWidget::OnDLCAvailabilityUpdated() {
}

void UGGLevelSelectUserWidget::OnDeleteSavePopupCallback(const FString& ID, UObject* Object, const FString& ButtonID, EPopupResponse Response) {
}

bool UGGLevelSelectUserWidget::IsLevelSelectAnimationPlaying() {
    return false;
}

void UGGLevelSelectUserWidget::InitializeLevelWidget(FDLCLevelData InLevelData, UGGLevelSelectMenuTabUserWidget* InLevelSelectMenu) {
}

UWidget* UGGLevelSelectUserWidget::HandleOwnedButtonsNavigation(EUINavigation InNavigation) {
    return NULL;
}

UWidget* UGGLevelSelectUserWidget::HandleNonOwnedButtonsNavigation(EUINavigation InNavigation) {
    return NULL;
}

FMargin UGGLevelSelectUserWidget::GetCurrentTargetOffsets() {
    return FMargin{};
}

UWidgetAnimation* UGGLevelSelectUserWidget::GetCurrentScalingAnimation() {
    return NULL;
}

bool UGGLevelSelectUserWidget::GetButtonsVisible_Implementation() {
    return false;
}

void UGGLevelSelectUserWidget::ForceExpand() {
}

void UGGLevelSelectUserWidget::FocusLevelSelect() {
}

void UGGLevelSelectUserWidget::ExpandLevelSelect() {
}

bool UGGLevelSelectUserWidget::DoesEveryoneOwnDLC() {
    return false;
}

void UGGLevelSelectUserWidget::DeleteSelectedSave() {
}

bool UGGLevelSelectUserWidget::CheckLocalOwnership() {
    return false;
}


