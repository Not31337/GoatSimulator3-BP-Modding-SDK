#include "GGOptionContainerUserWidget.h"

UGGOptionContainerUserWidget::UGGOptionContainerUserWidget() {
    this->SettingsLabel = NULL;
    this->OptionWidgetContainer = NULL;
    this->Background = NULL;
    this->OptionWidget = NULL;
    this->ParentSettingTab = NULL;
}


FText UGGOptionContainerUserWidget::GetFormattedLabelText() const {
    return FText::GetEmpty();
}


