#include "GGOnlineConsoleOSSSessionManager.h"

UGGOnlineConsoleOSSSessionManager::UGGOnlineConsoleOSSSessionManager() {
    this->OwningLocalPlayer = NULL;
}

void UGGOnlineConsoleOSSSessionManager::OnUpdateLastWorldCollectionLoaded() {
}

void UGGOnlineConsoleOSSSessionManager::OnStretchGoalChangedState(AGGCastleStretchGoal* Goal, EStretchGoalStates State, EStateChangeSource Source) {
}

void UGGOnlineConsoleOSSSessionManager::OnSplitScreenStarted() {
}

void UGGOnlineConsoleOSSSessionManager::OnSplitScreenEnded() {
}

void UGGOnlineConsoleOSSSessionManager::OnNetworkErrorPopupResponse(const FString& ID, UObject* Object, const FString& ButtonID, EPopupResponse Response) {
}

void UGGOnlineConsoleOSSSessionManager::OnLeaveSplitScreenForInviteResponse(const FString& ID, UObject* Object, const FString& ButtonID, EPopupResponse Response) {
}

void UGGOnlineConsoleOSSSessionManager::OnGoOnlinePopupResponse(const FString& ID, UObject* Object, const FString& ButtonID, EPopupResponse Response) {
}

void UGGOnlineConsoleOSSSessionManager::OnGeneralNetworkSettingChange(FGGGameSetting& InSetting) {
}

void UGGOnlineConsoleOSSSessionManager::OnDLCsUpdated() {
}

void UGGOnlineConsoleOSSSessionManager::HandleDisconnect(UWorld* InWorld, UNetDriver* NetDriver) {
}


