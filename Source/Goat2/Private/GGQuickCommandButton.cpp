#include "GGQuickCommandButton.h"

UGGQuickCommandButton::UGGQuickCommandButton() {
    this->CommandLabel = NULL;
    this->NotificationLabel = NULL;
    this->AssetLabel = NULL;
}

void UGGQuickCommandButton::RunDelegateCommand() {
}

bool UGGQuickCommandButton::HasNativeDelegateBound() {
    return false;
}


