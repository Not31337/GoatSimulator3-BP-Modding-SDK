#include "GGSettingsTabMenuUserWidget.h"

UGGSettingsTabMenuUserWidget::UGGSettingsTabMenuUserWidget() {
    this->PaddingSettingsWidgets = 100.00f;
    this->SettingScrollbox = NULL;
    this->SettingsBox = NULL;
    this->ToolTipLabel = NULL;
}

void UGGSettingsTabMenuUserWidget::SetCurrentOptionToolTip(FText Tooltip) {
}

void UGGSettingsTabMenuUserWidget::OnSettingWidgetCreated_Implementation(UUserWidget* CreatedWidget, bool bIsCategory) {
}

void UGGSettingsTabMenuUserWidget::OnSettingsRowRequireApply(UGGGameSettingOptionUserWidget* GameSetting) {
}

void UGGSettingsTabMenuUserWidget::OnOptionHovered(UGGOptionContainerUserWidget* Widget, UGGGameSettingOptionUserWidget* Option) {
}

void UGGSettingsTabMenuUserWidget::OnOptionFocused(UGGOptionContainerUserWidget* Widget) {
}

UWidget* UGGSettingsTabMenuUserWidget::HandleListNavigation(EUINavigation NavigationDir) {
    return NULL;
}

void UGGSettingsTabMenuUserWidget::CreateSettingWidgets() {
}

void UGGSettingsTabMenuUserWidget::BringSettingIntoView(UGGUserWidget* SettingWidget) {
}


