#include "GGGearAcquiredUserWidget.h"

UGGGearAcquiredUserWidget::UGGGearAcquiredUserWidget() {
    this->DataAsset = NULL;
    this->Tier = -1;
    this->TierColors.AddDefaulted(5);
    this->bApplyRarityColor = false;
    this->GearIcon = NULL;
    this->GearNameLabel = NULL;
    this->GearNameLabelRich = NULL;
    this->NewGearLabel = NULL;
    this->GearUnlockedLabel = NULL;
    this->AbilityLabel = NULL;
    this->RootCanvas = NULL;
    this->Content = NULL;
    this->ColorBackground = NULL;
}


FLinearColor UGGGearAcquiredUserWidget::GetFXTierColor() {
    return FLinearColor{};
}


