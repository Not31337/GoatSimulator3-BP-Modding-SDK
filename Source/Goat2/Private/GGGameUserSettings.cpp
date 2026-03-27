#include "GGGameUserSettings.h"

UGGGameUserSettings::UGGGameUserSettings() {
    this->bUseVSync = true;
    this->InputMappingSaveGame = NULL;
    this->PreferencesSaveGame = NULL;
}

void UGGGameUserSettings::SetNetworkSetting(bool bWantsToBeOnline, bool bSaveWithoutApplying) {
}

void UGGGameUserSettings::SetFrameRateLimit_Always(float NewLimitFPS) {
}

void UGGGameUserSettings::RequestUIUpdateBlueprint() {
}

void UGGGameUserSettings::RemoveDelegateFromOnSettingApplied(FGGDelegateHandleWrapper InHandle, FGameplayTag InSetting) {
}

void UGGGameUserSettings::OnScalabilitySettingApplied(FGGGameSetting& InSetting) {
}

void UGGGameUserSettings::OnCharacterModelQualityChanged(FGGGameSetting& InSetting) {
}

void UGGGameUserSettings::OnAudioSettingChanged(FGGGameSetting& InSetting) {
}

void UGGGameUserSettings::LogInputBindings(int32 PlayerIndex) const {
}

TArray<FGGGameSettingHandle> UGGGameUserSettings::GetRelevantSettingHandlesInCategoryForPlayer(FName CategoryName, UGGLocalPlayer* LocalPlayer) {
    return TArray<FGGGameSettingHandle>();
}

TArray<FName> UGGGameUserSettings::GetRelevantCategoriesForPlayer(UGGLocalPlayer* LocalPlayer) {
    return TArray<FName>();
}

bool UGGGameUserSettings::GetIsAboveRecomendedGPUSettingMobile() const {
    return false;
}

FVector2D UGGGameUserSettings::GetCameraInputSensitivity(const AGGPlayerController* PlayerController) {
    return FVector2D{};
}

TArray<FGGGameSettingHandle> UGGGameUserSettings::GetAllSettingHandlesInCategory(FName CategoryName, UGGLocalPlayer* LocalPlayer) {
    return TArray<FGGGameSettingHandle>();
}

TArray<FName> UGGGameUserSettings::GetAllCategoryNames(UGGLocalPlayer* LocalPlayer) {
    return TArray<FName>();
}

UGGGameUserSettings* UGGGameUserSettings::Get() {
    return NULL;
}

FGGDelegateHandleWrapper UGGGameUserSettings::BindDelegateToOnSettingApplied(FGGOnSettingApplied_K2Delegate InDelegate, FGameplayTag InSetting, UObject* PlayerReference) {
    return FGGDelegateHandleWrapper{};
}

void UGGGameUserSettings::ApplyScalabilitySettings() const {
}


