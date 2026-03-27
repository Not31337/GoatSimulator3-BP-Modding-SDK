#include "GGCheatMenuListEntryUserWidget.h"

UGGCheatMenuListEntryUserWidget::UGGCheatMenuListEntryUserWidget() {
    this->SelectionSlot = NULL;
    this->FavoriteOverlay = NULL;
    this->FavoriteCheckbox = NULL;
    this->OptionWidget = NULL;
    this->CheatListItemObject = NULL;
}

void UGGCheatMenuListEntryUserWidget::OnSetSettingValue(UGGGameSettingOptionUserWidget* FromWidget) {
}

void UGGCheatMenuListEntryUserWidget::OnFavoriteCheckStateChange(bool IsChecked) {
}


