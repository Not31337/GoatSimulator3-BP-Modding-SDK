#include "GGDLCDataAsset.h"

UGGDLCDataAsset::UGGDLCDataAsset() {
    this->DLC = EGoatDLC::Invalid;
    this->bShowUnlockPopup = false;
    this->InstinctPackToUnlock = NULL;
}

TSoftObjectPtr<UTexture2D> UGGDLCDataAsset::GetChaosCurrencyImage() const {
    return NULL;
}


