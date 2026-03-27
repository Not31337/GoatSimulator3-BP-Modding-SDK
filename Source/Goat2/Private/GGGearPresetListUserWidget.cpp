#include "GGGearPresetListUserWidget.h"

UGGGearPresetListUserWidget::UGGGearPresetListUserWidget() {
    this->GearSetsTileView = NULL;
    this->bHoldToDeletePreset = true;
    this->NumberOfColumns = 3;
    this->LastAddedPresetItem = NULL;
    this->PopupUserWidget = NULL;
    this->DeferredCreatedHandle = NULL;
}

void UGGGearPresetListUserWidget::SpawnPresetNamingPopup(UGGPersonalGearPresetHandle* DeferredHandle) {
}

void UGGGearPresetListUserWidget::SetActiveSorting(const TArray<FGameplayTag>& InSortingPasses, bool bRefreshGearPresetsList) {
}

void UGGGearPresetListUserWidget::RefreshGearPresetsList(EGGGearPresetRefreshReason RefreshReason) {
}

void UGGGearPresetListUserWidget::QueryPresetNickname(UGGPersonalGearPresetHandle* DeferredHandle) {
}

void UGGGearPresetListUserWidget::PresetNamingPopupResponse(const FString& ID, UObject* Object, const FString& ButtonID, EPopupResponse Response) {
}

void UGGGearPresetListUserWidget::OnUpdatePreset(UGGGearItemPresetButtonUserWidget* Widget) {
}

void UGGGearPresetListUserWidget::OnUnequipPreset(UGGGearItemPresetButtonUserWidget* Widget) {
}

void UGGGearPresetListUserWidget::OnPreviewPreset(UGGGearItemPresetButtonUserWidget* Widget) {
}

void UGGGearPresetListUserWidget::OnFavoritePreset(UGGGearItemPresetButtonUserWidget* Widget) {
}

void UGGGearPresetListUserWidget::OnEquipPreset(UGGGearItemPresetButtonUserWidget* Widget) {
}

void UGGGearPresetListUserWidget::OnDeletePreset(UGGGearItemPresetButtonUserWidget* Widget) {
}

void UGGGearPresetListUserWidget::OnAddPreset(UGGGearItemPresetButtonUserWidget* Widget) {
}

void UGGGearPresetListUserWidget::GetActionHints_Implementation(TArray<FActionHintStruct>& OutHints) {
}

void UGGGearPresetListUserWidget::DeletePreset(UGGPersonalGearPresetHandle* PresetHandle) {
}

void UGGGearPresetListUserWidget::AddPresetWithNickname(UGGPersonalGearPresetHandle* DeferredHandle, const FString& InSetNickname) {
}


