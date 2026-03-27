#include "GGPopupDLCUserWidget.h"

UGGPopupDLCUserWidget::UGGPopupDLCUserWidget() {
    this->PurchaseButton = NULL;
    this->MoreInfoButton = NULL;
    this->DLC = EGoatDLC::Invalid;
    this->bHidePurchaseButtonIfAlreadyOwned = false;
}

bool UGGPopupDLCUserWidget::ShouldFocusExternalActionFirst() const {
    return false;
}

void UGGPopupDLCUserWidget::SetMoreInfo(const FString& URL, const FText& ButtonText) {
}

void UGGPopupDLCUserWidget::SetLevelData(FDLCLevelData InData) {
}

void UGGPopupDLCUserWidget::SetDLC(EGoatDLC InDLC, const FText& HeaderText) {
}

void UGGPopupDLCUserWidget::ReplaceOKWithPagination(bool bEnable) {
}




void UGGPopupDLCUserWidget::OnMoreInfoInteracted(UGGUserWidget* Widget, FPointerEvent PointerEvent, FKeyEvent KeyEvent) {
}


