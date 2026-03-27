#include "GGGearItemPresetButtonUserWidget.h"

UGGGearItemPresetButtonUserWidget::UGGGearItemPresetButtonUserWidget() {
    this->PresetHandle = NULL;
    this->bHoldToDeletePreset = true;
    this->SlotOrderBigIcon.AddDefaulted(2);
    this->bSmallIconsHasDesignatedSlots = false;
    this->SmallIconsDesignatedSlots.AddDefaulted(4);
    this->SlotOrderSmallIcons.AddDefaulted(5);
    this->bShowDisabledGearAsGrayedOut = true;
    this->bUseGearTierColorsInIcons = false;
    this->bUseAGTierColorForAllSlots = true;
    this->bUseAGTierAsBorderColor = true;
    this->GearImageBig = NULL;
    this->GearImageSmall1 = NULL;
    this->GearImageSmall2 = NULL;
    this->GearImageSmall3 = NULL;
    this->GearImageSmall4 = NULL;
    this->EquippedOverlay = NULL;
    this->FavoriteOverlay = NULL;
    this->DeleteButtonContainer = NULL;
    this->DeleteButton = NULL;
    this->RefreshButton = NULL;
    this->PresetNameLabel = NULL;
    this->FavoriteCheckbox = NULL;
    this->FavoriteDropShadow = NULL;
    this->PresetBorder = NULL;
    this->BackgroundBig = NULL;
    this->BackgroundSmall1 = NULL;
    this->BackgroundSmall2 = NULL;
    this->BackgroundSmall3 = NULL;
    this->BackgroundSmall4 = NULL;
    this->GearEquippedAnim = NULL;
    this->GearSelectedAnim = NULL;
    this->ErrorAnim = NULL;
    this->GearAddedAnim = NULL;
    this->PresetDeletedAnim = NULL;
    this->HoldToDeleteAudioComponent = NULL;
}

void UGGGearItemPresetButtonUserWidget::ToggleDelete() {
}

void UGGGearItemPresetButtonUserWidget::StopHoldToDelete() {
}

void UGGGearItemPresetButtonUserWidget::StartHoldToDelete() {
}

void UGGGearItemPresetButtonUserWidget::SetName_Implementation() {
}

void UGGGearItemPresetButtonUserWidget::SetFavorite() {
}

void UGGGearItemPresetButtonUserWidget::SetEquipped() {
}

void UGGGearItemPresetButtonUserWidget::PlayError() {
}











void UGGGearItemPresetButtonUserWidget::OnGearButtonUnhovered() {
}

void UGGGearItemPresetButtonUserWidget::OnGearButtonReleased() {
}

void UGGGearItemPresetButtonUserWidget::OnGearButtonHovered() {
}


void UGGGearItemPresetButtonUserWidget::OnFavoriteCheckStateChange(bool IsChecked) {
}

void UGGGearItemPresetButtonUserWidget::OnDeleteButtonReleased() {
}

void UGGGearItemPresetButtonUserWidget::OnDeleteButtonPressed() {
}

bool UGGGearItemPresetButtonUserWidget::IsPresetEquipped() {
    return false;
}


