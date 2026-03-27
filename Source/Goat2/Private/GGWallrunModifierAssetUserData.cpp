#include "GGWallrunModifierAssetUserData.h"

UGGWallrunModifierAssetUserData::UGGWallrunModifierAssetUserData() {
    this->DataAsset = NULL;
    this->bOverrideGameplayDataAsset = false;
    this->bOverrideEffectsDataAsset = false;
}

bool UGGWallrunModifierAssetUserData::GetModifierSettingsFromSMActor(UStaticMeshComponent* SMComp, FWallrunModifierSettings& OutWallrunModifierSettings) {
    return false;
}

bool UGGWallrunModifierAssetUserData::GetModifierSettings(FWallrunModifierSettings& OutWallrunModifierSettings) const {
    return false;
}

bool UGGWallrunModifierAssetUserData::GetModifierEffectSettingsFromSMActor(UStaticMeshComponent* SMComp, FWallrunModifierEffectSettings& OutWallrunModifierEffectSettings) {
    return false;
}

bool UGGWallrunModifierAssetUserData::GetModifierEffectSettings(FWallrunModifierEffectSettings& OutWallrunModifierEffectSettings) const {
    return false;
}


