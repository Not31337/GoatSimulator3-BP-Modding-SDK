#include "GGMultipleOptionsOptionUserWidget.h"

UGGMultipleOptionsOptionUserWidget::UGGMultipleOptionsOptionUserWidget() {
    this->LeftArrowButton = NULL;
    this->RightArrowButton = NULL;
    this->OptionLabel = NULL;
    this->ControllerFocus = NULL;
    this->bCanWrap = true;
    this->ActiveOption = 0;
}

void UGGMultipleOptionsOptionUserWidget::SetActiveOption(int32 OptionIndex) {
}

void UGGMultipleOptionsOptionUserWidget::RefreshTextLabel() {
}

void UGGMultipleOptionsOptionUserWidget::NavigateRight() {
}

int32 UGGMultipleOptionsOptionUserWidget::NavigateOptions(int32 CurrentIndex, int32 Direction, bool bWrap) {
    return 0;
}

void UGGMultipleOptionsOptionUserWidget::NavigateLeft() {
}

bool UGGMultipleOptionsOptionUserWidget::IsValidSelection() const {
    return false;
}

FString UGGMultipleOptionsOptionUserWidget::GetValueAsString() const {
    return TEXT("");
}

float UGGMultipleOptionsOptionUserWidget::GetValueAsFloat() const {
    return 0.0f;
}

int32 UGGMultipleOptionsOptionUserWidget::GetNumAvailableOptions() const {
    return 0;
}


