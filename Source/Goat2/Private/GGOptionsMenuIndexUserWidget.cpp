#include "GGOptionsMenuIndexUserWidget.h"

UGGOptionsMenuIndexUserWidget::UGGOptionsMenuIndexUserWidget() {
    this->ButtonsContainer = NULL;
    this->FriendsButton = NULL;
    this->GameShareButtonRef = NULL;
}

void UGGOptionsMenuIndexUserWidget::OnGameShareButtonInteracted(UGGUserWidget* Widget, FPointerEvent PointerEvent, FKeyEvent KeyEvent) {
}

FString UGGOptionsMenuIndexUserWidget::GetMainMenuLevelName() {
    return TEXT("");
}

ESlateVisibility UGGOptionsMenuIndexUserWidget::GetGameShareButtonVisibility() {
    return ESlateVisibility::Visible;
}

bool UGGOptionsMenuIndexUserWidget::GetGameShareButtonEnabled() {
    return false;
}


