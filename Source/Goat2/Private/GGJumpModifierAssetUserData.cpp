#include "GGJumpModifierAssetUserData.h"

UGGJumpModifierAssetUserData::UGGJumpModifierAssetUserData() {
    this->DataAsset = NULL;
    this->bOverrideGameplayDataAsset = false;
    this->bOverrideEffectsDataAsset = false;
}

bool UGGJumpModifierAssetUserData::GetModifierSettingsFromSMActor(UStaticMeshComponent* SMComp, FJumpModifierSettings& OutJumpModifierSettings) {
    return false;
}

bool UGGJumpModifierAssetUserData::GetModifierSettings(FJumpModifierSettings& OutJumpModifierSettings) const {
    return false;
}

bool UGGJumpModifierAssetUserData::GetModifierEffectSettingsFromSMActor(UStaticMeshComponent* SMComp, FJumpModifierEffectSettings& OutJumpModifierEffectSettings) {
    return false;
}

bool UGGJumpModifierAssetUserData::GetModifierEffectSettings(FJumpModifierEffectSettings& OutJumpModifierEffectSettings) const {
    return false;
}


