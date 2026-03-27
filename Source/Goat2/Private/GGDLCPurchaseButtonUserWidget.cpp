#include "GGDLCPurchaseButtonUserWidget.h"

UGGDLCPurchaseButtonUserWidget::UGGDLCPurchaseButtonUserWidget() {
    this->AvailableText = FText::FromString(TEXT("Available here!"));
    this->UnavailableText = FText::FromString(TEXT("Unavailable For Purchase"));
    this->OwnedText = FText::FromString(TEXT("Owned"));
    this->bRemovePopupOnCheckout = true;
    this->DLC = EGoatDLC::Invalid;
}

void UGGDLCPurchaseButtonUserWidget::OnOffersUpdated() {
}

void UGGDLCPurchaseButtonUserWidget::OnDLCAvailabilityUpdated() {
}

void UGGDLCPurchaseButtonUserWidget::InitializePurchaseButton(EGoatDLC NewDLC) {
}


