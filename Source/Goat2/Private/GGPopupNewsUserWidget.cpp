#include "GGPopupNewsUserWidget.h"

UGGPopupNewsUserWidget::UGGPopupNewsUserWidget() {
    this->AdditionalMappings.AddDefaulted(2);
    this->bHidePurchaseButtonIfAlreadyOwned = true;
    this->NewsImage = NULL;
    this->TopPanelSwitcher = NULL;
    this->HeaderPanel = NULL;
    this->TabsPanel = NULL;
    this->PopupBodySubTitle = NULL;
    this->PopupHeaderOverlay = NULL;
    this->PopupHeaderLabel = NULL;
    this->PopupFooterLabel = NULL;
    this->Divider = NULL;
    this->bPaginationSupported = false;
    this->PaginationPanel = NULL;
    this->PaginationButtonPrevious = NULL;
    this->PaginationButtonNext = NULL;
    this->TabsSizeBox = NULL;
    this->NumberOfTabs = 4;
    this->LeftTabOverflowContainer = NULL;
    this->TabLeft = NULL;
    this->Tab0 = NULL;
    this->TabPanel0 = NULL;
    this->Tab1 = NULL;
    this->TabPanel1 = NULL;
    this->Tab2 = NULL;
    this->TabPanel2 = NULL;
    this->Tab3 = NULL;
    this->TabPanel3 = NULL;
    this->RightTabOverflowContainer = NULL;
    this->TabRight = NULL;
    this->UnreadIndicator = NULL;
}

void UGGPopupNewsUserWidget::PaginationPrevious() {
}

void UGGPopupNewsUserWidget::PaginationNext() {
}

void UGGPopupNewsUserWidget::PaginationIndex(int32 Index) {
}

void UGGPopupNewsUserWidget::PaginationID(FName InID) {
}

void UGGPopupNewsUserWidget::OnTabButtonInteracted(UGGUserWidget* Widget, FPointerEvent PointerEvent, FKeyEvent KeyEvent) {
}

void UGGPopupNewsUserWidget::OnPurchaseCheckoutFlowComplete(bool bSucceeded, const TArray<EGoatDLC>& DLCs, const TArray<FString>& OfferIDs) {
}

int32 UGGPopupNewsUserWidget::GetTabEntryIndex(int32 TabIndex, int32 CurrentEntryIndex) {
    return 0;
}


