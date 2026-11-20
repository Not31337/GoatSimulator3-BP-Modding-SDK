#include "GGGameShareTabUserWidget.h"

UGGGameShareTabUserWidget::UGGGameShareTabUserWidget() {
    this->LocalCommunicationButton = NULL;
    this->CampusButton = NULL;
    this->EndButton = NULL;
    this->ButtonsBox = NULL;
    this->bGameShareActive = false;
}

void UGGGameShareTabUserWidget::OnLocalCommunicationButtonInteracted(UGGUserWidget* Widget, FPointerEvent PointerEvent, FKeyEvent KeyEvent) {
}

void UGGGameShareTabUserWidget::OnEndButtonInteracted(UGGUserWidget* Widget, FPointerEvent PointerEvent, FKeyEvent KeyEvent) {
}

void UGGGameShareTabUserWidget::OnCampusButtonInteracted(UGGUserWidget* Widget, FPointerEvent PointerEvent, FKeyEvent KeyEvent) {
}

UWidget* UGGGameShareTabUserWidget::HandleListNavigation(EUINavigation NavigationDir) {
    return NULL;
}

bool UGGGameShareTabUserWidget::GetGameSharePossible() {
    return false;
}

bool UGGGameShareTabUserWidget::GetGameShareOngoing() {
    return false;
}


