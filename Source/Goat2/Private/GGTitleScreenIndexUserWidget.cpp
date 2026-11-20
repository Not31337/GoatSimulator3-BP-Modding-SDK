#include "GGTitleScreenIndexUserWidget.h"

UGGTitleScreenIndexUserWidget::UGGTitleScreenIndexUserWidget() {
    this->ButtonsContainer = NULL;
    this->SocialMediaWidget = NULL;
    this->GameShareButtonRef = NULL;
    this->GoOnlineButtonRef = NULL;
    this->FriendsButtonRef = NULL;
}

void UGGTitleScreenIndexUserWidget::SetLastOpenedMenuTab(FGameplayTag InMenuTab) {
}

void UGGTitleScreenIndexUserWidget::PostConstruct() {
}

void UGGTitleScreenIndexUserWidget::OnGameShareButtonInteracted(UGGUserWidget* Widget, FPointerEvent PointerEvent, FKeyEvent KeyEvent) {
}

FGameplayTag UGGTitleScreenIndexUserWidget::GetLastOpenedMenuTab() {
    return FGameplayTag{};
}

ESlateVisibility UGGTitleScreenIndexUserWidget::GetGameShareButtonVisibility() {
    return ESlateVisibility::Visible;
}

bool UGGTitleScreenIndexUserWidget::GetGameShareButtonEnabled() {
    return false;
}


