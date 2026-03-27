#include "GGMenuComponent.h"

UGGMenuComponent::UGGMenuComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->DefaultPopupWidgetClass = NULL;
    this->SelectableTextPopupWidgetClass = NULL;
    this->CriticalErrorPopupWidgetClass = NULL;
    this->PopupDataTable = NULL;
    this->MenuHoldThreshold = 0.85f;
    this->OwningController = NULL;
    this->PopupInputComponent = NULL;
}

bool UGGMenuComponent::ResolvePopup(const FString& ID, EPopupResponse Response, const FString& ButtonID) {
    return false;
}

bool UGGMenuComponent::RemovePopup(const FString& ID, EPopupResponse Response) {
    return false;
}

bool UGGMenuComponent::RemoveMenuContext(FGameplayTag MenuTag, FMenuNavigationContext Context) {
    return false;
}

void UGGMenuComponent::PauseMenuUp() {
}

void UGGMenuComponent::PauseMenuDown() {
}

void UGGMenuComponent::OnQuestCompleted(AGGQuestBase* Quest, AGGPlayerState* OptionalPlayerState) {
}

void UGGMenuComponent::OnInventoryUnlockedStore(UDataAsset* Asset, FGameplayTag Context, AGGPlayerController* OptionalPC) {
}

void UGGMenuComponent::OnInventoryUnlocked(UDataAsset* Asset, FGameplayTag Context, AGGPlayerController* OptionalPC) {
}

void UGGMenuComponent::OnInstinctPackUnlocked(UGGInstinctPackDataAsset* DataAsset, FGameplayTag Context) {
}

void UGGMenuComponent::Mobile_PauseMenuUp() {
}

void UGGMenuComponent::Mobile_PauseMenuDown() {
}

bool UGGMenuComponent::HasActivePopup() {
    return false;
}

bool UGGMenuComponent::GetCurrentNavigationContext(FGameplayTag MenuID, FGameplayTag& OutMenuTag, FMenuNavigationContextContainer& OutContext, bool bExcludeHold) {
    return false;
}

bool UGGMenuComponent::CreatePopupCustomUnique(const FString& ID, FPopupDataRow Data, FGGPopupResponseDelegate Event, UGGPopupUserWidget*& OutWidget) {
    return false;
}

bool UGGMenuComponent::CreatePopupCustom(const FString& ID, FPopupDataRow Data, FGGPopupResponseDelegate Event, UGGPopupUserWidget*& OutWidget) {
    return false;
}

bool UGGMenuComponent::CreatePopup(const FString& ID, FGGPopupResponseDelegate Event, UGGPopupUserWidget*& OutWidget) {
    return false;
}

bool UGGMenuComponent::AddMenuContext(FGameplayTag MenuTag, FMenuNavigationContext Context, int32 Priority, float Duration, bool bHold) {
    return false;
}


