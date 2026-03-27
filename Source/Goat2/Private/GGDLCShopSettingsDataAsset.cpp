#include "GGDLCShopSettingsDataAsset.h"

UGGDLCShopSettingsDataAsset::UGGDLCShopSettingsDataAsset() {
    this->DLCShopMenuLabel = FText::FromString(TEXT("Add-ons"));
    this->EntryWidth = 280.00f;
    this->EntryHeight = 350.00f;
    this->bShowDLCTitle = false;
    this->bShowDLCTitleAsImage = true;
    this->bShowPriceInRibbon = false;
    this->bShowOwnedInRibbon = true;
    this->bUseDirectPurchaseFlow = false;
    this->bShowExternalStorePopup = false;
    this->bShowNewsFirstIfAvailable = true;
    this->bDisableButtonForOwnedDLCs = false;
    this->bDisableButtonForInvalidDLCs = false;
    this->bHideInvalidDLC = false;
    this->bHideDLCWithoutGoatFeature = true;
    this->bShowAlreadyOwnedLabelOnFocus = false;
    this->bPlayBumpAnimationOnHover = true;
}


