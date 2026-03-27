#include "GGTopBarNavigationUserWidget.h"

UGGTopBarNavigationUserWidget::UGGTopBarNavigationUserWidget() {
}

void UGGTopBarNavigationUserWidget::ToggleTabButtonVisible(UGGMenuDataAsset* InMenuData, bool bInVisible) {
}

void UGGTopBarNavigationUserWidget::ToggleTabButtonEnabled(UGGMenuDataAsset* InMenuData, bool bInEnabled) {
}

ETopBarButtonVisibility UGGTopBarNavigationUserWidget::ShouldCreateMenuItem_Implementation(UGGMenuDataAsset* InMenuData) {
    return ETopBarButtonVisibility::Enabled;
}

void UGGTopBarNavigationUserWidget::SetOwningMenu_Implementation(UGGMenuUserWidget* InOwningMenu) {
}



void UGGTopBarNavigationUserWidget::OnMenuEntered(FGameplayTag InTag, FMenuNavigationContext Context) {
}

void UGGTopBarNavigationUserWidget::NavigateDirection(int32 Direction) {
}


void UGGTopBarNavigationUserWidget::BindShouldCreateMenuItem(FOnShouldCreateTopBarMenuItem Event) {
}


