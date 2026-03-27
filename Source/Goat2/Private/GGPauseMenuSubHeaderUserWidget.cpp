#include "GGPauseMenuSubHeaderUserWidget.h"

UGGPauseMenuSubHeaderUserWidget::UGGPauseMenuSubHeaderUserWidget() {
    this->ButtonContainer = NULL;
    this->LeftNavSlot = NULL;
    this->RightNavSlot = NULL;
    this->CurrentButton = NULL;
}

void UGGPauseMenuSubHeaderUserWidget::SubHeaderButtonInteracted(UGGUserWidget* Widget, FPointerEvent PointerEvent, FKeyEvent KeyEvent) {
}



bool UGGPauseMenuSubHeaderUserWidget::NavigateCategoryRight() {
    return false;
}

bool UGGPauseMenuSubHeaderUserWidget::NavigateCategoryLeft() {
    return false;
}

void UGGPauseMenuSubHeaderUserWidget::ChangeCategory(FGameplayTag Category) {
}


