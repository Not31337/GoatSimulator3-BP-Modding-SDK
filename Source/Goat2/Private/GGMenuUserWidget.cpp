#include "GGMenuUserWidget.h"

UGGMenuUserWidget::UGGMenuUserWidget() {
    this->bIsFocusable = true;
    this->ActionHintBarWidget = NULL;
    this->ExitAnimation = NULL;
    this->TabContainer = NULL;
    this->bReturnShouldCloseMenu = true;
    this->bBlockMenuExiting = false;
    this->bHideGameHUDOnEnter = true;
    this->bLimitOneChildMenu = true;
    this->NavigateTabLeftMapping = TEXT("MenuNavLeft");
    this->NavigateTabRightMapping = TEXT("MenuNavRight");
    this->CurrentMenuDataAsset = NULL;
    this->CurrentTab = NULL;
    this->InitialWidgetToFocus = NULL;
    this->CachedWidgetToFocus = NULL;
    this->OwningMenu = NULL;
}

void UGGMenuUserWidget::UpdateActionHints() {
}

UGGUserWidget* UGGMenuUserWidget::SpawnAdditionalWidget(TSoftClassPtr<UGGUserWidget> WidgetClass, bool bAddToScreen, UGGUserWidget* FromWidget, UPanelWidget* ParentWidget) {
    return NULL;
}

bool UGGMenuUserWidget::ShouldDisplayActionHint_Implementation(FActionHintStruct Hint) {
    return false;
}

void UGGMenuUserWidget::SetBlockMenuExiting(bool bBlockEnabled) {
}

bool UGGMenuUserWidget::ResetLastFocus() {
    return false;
}

bool UGGMenuUserWidget::RequestTabNavigation(FGameplayTag InTag, FMenuNavigationContext Context) {
    return false;
}

void UGGMenuUserWidget::ReplaceAllDLCMenus() {
}

bool UGGMenuUserWidget::RemoveAdditionalWidget(UGGUserWidget* Widget) {
    return false;
}

UGGUserWidget* UGGMenuUserWidget::RegisterAdditionalWidget(UGGUserWidget* Widget) {
    return NULL;
}


bool UGGMenuUserWidget::OnTabNavigation_Implementation(FGameplayTag InTag, FMenuNavigationContext Context) {
    return false;
}



void UGGMenuUserWidget::OnSplitscreenPlayerUpdated() {
}

bool UGGMenuUserWidget::OnRequestingTabNavigation_Implementation(FGameplayTag InTag, FMenuNavigationContext Context) {
    return false;
}




void UGGMenuUserWidget::OnGamepadChanged(bool bGamepadActive) {
}



bool UGGMenuUserWidget::OnActionMappingPressed_Implementation(FName ActionName) {
    return false;
}

bool UGGMenuUserWidget::IsValidActionHint(const FActionHintStruct& Hint) {
    return false;
}

bool UGGMenuUserWidget::IsMenuClosing() {
    return false;
}

bool UGGMenuUserWidget::IsEnabledActionHint_Implementation(FActionHintStruct Hint) {
    return false;
}

bool UGGMenuUserWidget::IsContextAssetValidForMenu_Implementation(FMenuNavigationContext Context) {
    return false;
}

bool UGGMenuUserWidget::HasUnhandledContext() {
    return false;
}

UGGUserWidget* UGGMenuUserWidget::GetWidgetWithID(FGameplayTag ID) {
    return NULL;
}

UGGMenuUserWidget* UGGMenuUserWidget::GetOwningMenu() {
    return NULL;
}

FGameplayTag UGGMenuUserWidget::GetLastMenuRequest() {
    return FGameplayTag{};
}

FGameplayTag UGGMenuUserWidget::GetCurrentMenuID_Implementation() {
    return FGameplayTag{};
}

FMenuNavigationContext UGGMenuUserWidget::GetCurrentContext() {
    return FMenuNavigationContext{};
}

void UGGMenuUserWidget::GetActionHints_Implementation(TArray<FActionHintStruct>& OutHints) {
}


bool UGGMenuUserWidget::ExitCurrentMenu_Implementation() {
    return false;
}

bool UGGMenuUserWidget::CloseMenu() {
    return false;
}


void UGGMenuUserWidget::ActionMappingPressed() {
}


