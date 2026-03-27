#include "GGTextEntryPopupUserWidget.h"

UGGTextEntryPopupUserWidget::UGGTextEntryPopupUserWidget() {
    this->TextEntry = NULL;
    this->bFocusTextEntryOnCreation = true;
    this->bFocusTextEntryOnFocusReceived = true;
    this->bFocusAcceptOptionOnCreation = false;
    this->bFocusAcceptButtonOnTextCommitted = true;
    this->TextEntryMaxLength = -1;
    this->SelectAllTextWhenFocused = false;
}

void UGGTextEntryPopupUserWidget::OnTextCommitted(const FText& Text, TEnumAsByte<ETextCommit::Type> CommitMethod) {
}

void UGGTextEntryPopupUserWidget::OnTextChanged(const FText& Text) {
}


