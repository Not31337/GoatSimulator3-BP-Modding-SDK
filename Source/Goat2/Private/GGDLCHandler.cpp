#include "GGDLCHandler.h"

UGGDLCHandler::UGGDLCHandler() {
    this->OwnerLocalPlayer = NULL;
    this->EOSDLCOwnershipSaveGame = NULL;
}

void UGGDLCHandler::TriggerUnlockedDLCPopup() {
}

void UGGDLCHandler::StartCheckout(EGoatDLC DLC, EGGCheckoutOrigin Origin) {
}

void UGGDLCHandler::SetCurrentDLCLevelData(FDLCLevelData DLCLevelData) {
}

void UGGDLCHandler::QueryGameNightDLCs() {
}

void UGGDLCHandler::PostLoadMapWithWorld(UWorld* World) {
}

void UGGDLCHandler::OnLoginStateChanged(TEnumAsByte<ELoginState> OldState, TEnumAsByte<ELoginState> NewState) {
}

void UGGDLCHandler::OnIntroSplashComplete() {
}

void UGGDLCHandler::OnFirstInstinctPackUnlocked(UGGInstinctPackDataAsset* Pack) {
}

bool UGGDLCHandler::IsDLCAvailable(EGoatDLC DLC) const {
    return false;
}

bool UGGDLCHandler::HasOffersBeenQueried() const {
    return false;
}

bool UGGDLCHandler::HasOfferForDLC(EGoatDLC DLC) const {
    return false;
}

TArray<EGoatDLC> UGGDLCHandler::GetOwnedDLCs() const {
    return TArray<EGoatDLC>();
}

FDLCOffer UGGDLCHandler::GetDLCOffer(EGoatDLC DLC) {
    return FDLCOffer{};
}

FDLCLevelData UGGDLCHandler::GetDLCLevelDataFromWorld(const UWorld* World) {
    return FDLCLevelData{};
}

FDLCLevelData UGGDLCHandler::GetDLCLevelDataFromID(const FString& LevelDataID) {
    return FDLCLevelData{};
}

FDLCLevelData UGGDLCHandler::GetDLCLevelDataFromDLCID(EGoatDLC InDLC) {
    return FDLCLevelData{};
}

TArray<FDLCLevelData> UGGDLCHandler::GetDLCLevelData(bool bOnlyIncludeEnabledDLC) {
    return TArray<FDLCLevelData>();
}

UGGDLCHandler* UGGDLCHandler::GetDLCHandler(const UObject* WorldContext) {
    return NULL;
}

UGGDLCDataAsset* UGGDLCHandler::GetDLCAsset(EGoatDLC GoatDLC) {
    return NULL;
}

FDLCLevelData UGGDLCHandler::GetCurrentDLCLevelData() const {
    return FDLCLevelData{};
}

UGGDLCDataAsset* UGGDLCHandler::GetCurrentDLCAsset() {
    return NULL;
}

void UGGDLCHandler::DummyCheckoutPopupResponse(const FString& ID, UObject* Object, const FString& ButtonID, EPopupResponse Response) {
}

void UGGDLCHandler::DLCPopupResponse(const FString& ID, UObject* Object, const FString& ButtonID, EPopupResponse Response) {
}


