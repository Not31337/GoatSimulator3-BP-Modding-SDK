#include "GGChatUserWidget.h"

UGGChatUserWidget::UGGChatUserWidget() {
    this->MaximumNumberOfChatEntries = 10;
    this->ChatFadeDelay = 5.00f;
    this->bWrapChatEntires = true;
    this->ChatEntryContainer = NULL;
    this->DefaultChatTextStyle = NULL;
}

bool UGGChatUserWidget::ShouldShowChat(FNotification Notification) {
    return false;
}




