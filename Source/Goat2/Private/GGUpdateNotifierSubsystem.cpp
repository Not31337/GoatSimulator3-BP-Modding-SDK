#include "GGUpdateNotifierSubsystem.h"

UGGUpdateNotifierSubsystem::UGGUpdateNotifierSubsystem() {
    this->AllCachedUpdates.AddDefaulted(29);
}

bool UGGUpdateNotifierSubsystem::ShowUpsellPopupDLC(EGoatDLC InDLC) {
    return false;
}

void UGGUpdateNotifierSubsystem::ShowDataCollectionConsentPopup() {
}

void UGGUpdateNotifierSubsystem::PostLoadMapWithWorld(UWorld* World) {
}

void UGGUpdateNotifierSubsystem::OnNotifyNewDLCUnlocked(const UGGDLCDataAsset* DLCDataAsset) {
}

void UGGUpdateNotifierSubsystem::OnNotifyHostInDLCSession(EGoatDLC DLC) {
}

void UGGUpdateNotifierSubsystem::OnNotifyClientJoinDLCSession(EGoatDLC DLC) {
}

void UGGUpdateNotifierSubsystem::OnNotifyClientInDLCSession(EGoatDLC DLC) {
}

void UGGUpdateNotifierSubsystem::OnLevelStartLoadingScreenRemoved() {
}

void UGGUpdateNotifierSubsystem::OnIntroSplashComplete() {
}

void UGGUpdateNotifierSubsystem::OnGameNightSessionStart(bool IsWebController) {
}

void UGGUpdateNotifierSubsystem::OnDLCsUpdated() {
}

void UGGUpdateNotifierSubsystem::NotifyPlayerAboutUpdate(FName UpdateName) {
}

void UGGUpdateNotifierSubsystem::NotificationPopupResponse(const FString& ID, UObject* Object, const FString& ButtonID, EPopupResponse Response) {
}

FName UGGUpdateNotifierSubsystem::GetNewsPrefNameFromLevelData(FDLCLevelData LevelData) {
    return NAME_None;
}

bool UGGUpdateNotifierSubsystem::GetCachedUpdateFromPrefName(FName PrefName, FUpdateNotificationData& OutData) {
    return false;
}

bool UGGUpdateNotifierSubsystem::ForceNewsRetrigger(FName PrefName, bool bPaginationOrigin) {
    return false;
}

void UGGUpdateNotifierSubsystem::DataCollectionPopupResponse(const FString& ID, UObject* Object, const FString& ButtonID, EPopupResponse Response) {
}

bool UGGUpdateNotifierSubsystem::CanShowUpsellPopupDLC(EGoatDLC InDLC) {
    return false;
}


