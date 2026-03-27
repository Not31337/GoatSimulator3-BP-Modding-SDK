#include "GGDLCShopEntryUserWidget.h"

UGGDLCShopEntryUserWidget::UGGDLCShopEntryUserWidget() {
    this->bFocusOnHover = true;
    this->DLC = EGoatDLC::Invalid;
    this->DLCTitleImagePosition = VAlign_Bottom;
    this->DLCAlreadyOwnedText = FText::FromString(TEXT("Owned"));
    this->bUseTextIfTitleImageIsMissing = true;
    this->bOverrideDLC = false;
    this->DLCDataAsset = NULL;
    this->DLCImage = NULL;
    this->DLCTitleSizeBox = NULL;
    this->DLCTitleScaleBox = NULL;
    this->DLCTitleImage = NULL;
    this->DLCTitleFallbackText = NULL;
    this->OverlayDLCName = NULL;
    this->DLCNameLabel = NULL;
    this->DLCPriceLabel = NULL;
    this->DLCAlreadyOwnedLabel = NULL;
    this->DLCSizeBox = NULL;
    this->MainSlot = NULL;
    this->OwnershipScaleBox = NULL;
    this->RibbonOverlay = NULL;
    this->ToggleAvailabilityOverlay = NULL;
    this->ToggleAvailabilityButton = NULL;
    this->DLCSelected = NULL;
    this->Settings = NULL;
    this->AssociatedHeader = NULL;
}

void UGGDLCShopEntryUserWidget::PurchaseDLC() {
}

void UGGDLCShopEntryUserWidget::OnToggleAvailabilityButton() {
}

void UGGDLCShopEntryUserWidget::OnOffersUpdated() {
}

void UGGDLCShopEntryUserWidget::OnNotificationPopupClosed(FUpdateNotificationData Data) {
}

void UGGDLCShopEntryUserWidget::OnDLCButtonPressed(UGGUserWidget* Widget, FPointerEvent PointerEvent, FKeyEvent KeyEvent) {
}

UWidget* UGGDLCShopEntryUserWidget::NavigateToOtherCategory(EUINavigation Direction) {
    return NULL;
}

bool UGGDLCShopEntryUserWidget::IsOfferValidOrOverwritten() const {
    return false;
}

void UGGDLCShopEntryUserWidget::DLCPopupCallback(const FString& ID, UObject* Object, const FString& ButtonID, EPopupResponse Response) {
}


