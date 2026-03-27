#include "GGOnlineManager.h"

UGGOnlineManager::UGGOnlineManager() {
    this->ConsoleSessionManager = NULL;
    this->bKeepPartyWhenReturningToTitle = false;
    this->ChatBeaconHost = NULL;
    this->ChatBeaconHostObject = NULL;
    this->ChatBeaconClient = NULL;
    this->OnlineAssetCache = NULL;
    this->OwnerLocalPlayer = NULL;
    this->GameInstance = NULL;
    this->MobileOnlineManager = NULL;
    this->SteamFriendsManager = NULL;
}

void UGGOnlineManager::UpdatePresence() {
}

void UGGOnlineManager::UpdateManagerPresenceCache() {
}

void UGGOnlineManager::UpdateCachedFriendsList() {
}

void UGGOnlineManager::StartClientTravel(const FString& TravelURL) {
}

void UGGOnlineManager::SetOnlineAssetCacheSize(int32 NumBytes) {
}

void UGGOnlineManager::SessionMemberRemoved(const FUniqueNetIdRepl& UserId, bool bIsLobbyOwner) {
}

void UGGOnlineManager::SessionMemberAdded(const FUniqueNetIdRepl& UserId, bool bIsLobbyOwner) {
}

void UGGOnlineManager::SearchForLobbyWithJoinCodeCompleted(bool bSuccess, const TArray<FGGLobbyInformation> InFoundLobbies) {
}

void UGGOnlineManager::SearchForLobbyCompleted_CheckJoinCode(bool bSuccess, const TArray<FGGLobbyInformation> InFoundLobbies) {
}

void UGGOnlineManager::SchedulePresenceUpdate(float NextUpdate) {
}

void UGGOnlineManager::ReadPrivilegePopupResponse(const FString& ID, UObject* Object, const FString& ButtonID, EPopupResponse Response) {
}

void UGGOnlineManager::ReadPopupResponse(const FString& ID, UObject* Object, const FString& ButtonID, EPopupResponse Response) {
}

void UGGOnlineManager::ReadFirstRunPopupResponse(const FString& ID, UObject* Object, const FString& ButtonID, EPopupResponse Response) {
}

void UGGOnlineManager::PreLoadMap(const FString& MapName) {
}

void UGGOnlineManager::PostLoadMapWithWorld(UWorld* World) {
}

void UGGOnlineManager::OnTravelFailure(UWorld* World, TEnumAsByte<ETravelFailure::Type> FailureType, const FString& ErrorMessage) {
}

void UGGOnlineManager::OnSteamSessionInviteAcceptSuccess() {
}

void UGGOnlineManager::OnSteamPrivacyUpdated(TEnumAsByte<ELobbyPrivacySetting> Privacy) {
}

void UGGOnlineManager::OnSteamPresenceUpdated(const FUniqueNetIdRepl& UniqueNetId) {
}

void UGGOnlineManager::OnSteamFriendsUpdated() {
}

void UGGOnlineManager::OnSteamFriendsListRead(bool bSuccess) {
}

void UGGOnlineManager::OnSessionUnlocked() {
}

void UGGOnlineManager::OnSessionMemberX1KeepAliveUpdated(const FUniqueNetIdRepl& UserId, const FString& PropertyValue) {
}

void UGGOnlineManager::OnSessionMembersInfoUpdate(const TArray<FUniqueNetIdRepl> UserIds) {
}

void UGGOnlineManager::OnSessionMemberPropertyUpdate(const FUniqueNetIdRepl& UserId, const FString& PropertyValue) {
}

void UGGOnlineManager::OnSessionMemberDLCInfoUpdated(const FUniqueNetIdRepl& UserId, const FString& PropertyValue) {
}

void UGGOnlineManager::OnSessionLocked() {
}

void UGGOnlineManager::OnSessionInviteProcessed(bool bHasPrivilege) {
}

void UGGOnlineManager::OnOverlayJoinAccepted(uint64 UIEventId) {
}

void UGGOnlineManager::OnOverlayInviteAccepted(const FString& InviteId) {
}

void UGGOnlineManager::OnOtherUserPromoted() {
}

void UGGOnlineManager::OnNetworkFailure(UWorld* World, UNetDriver* NetDriver, TEnumAsByte<ENetworkFailure::Type> FailureType, const FString& ErrorMessage) {
}

void UGGOnlineManager::OnMemberAttributeUpdate(bool bSuccess) {
}

void UGGOnlineManager::OnLocalUserPromoted() {
}

void UGGOnlineManager::OnLobbyUpdate(TEnumAsByte<EGGLobbyUpdateType> LobbyUpdateType) {
}

void UGGOnlineManager::OnLobbyOwnerUpdated(const FUniqueNetIdRepl& UserId) {
}

void UGGOnlineManager::OnLobbyInviteReceived(const FString& InviterName, const FString& LobbyId) {
}

void UGGOnlineManager::OnLobbyFinishedSearching(bool bSuccess) {
}

void UGGOnlineManager::OnLobbyDestroyed() {
}

void UGGOnlineManager::OnLobbyCreated(bool bSuccess) {
}

void UGGOnlineManager::OnLoadingScreenRemoved(AGGPlayerController* Controller, ELoadingScreenType InType, ERemovalReason RemovalReason) {
}

void UGGOnlineManager::OnLeftLobby(bool bWasKicked) {
}

void UGGOnlineManager::OnLeaveSplitScreenForInviteResponse(const FString& ID, UObject* Object, const FString& ButtonID, EPopupResponse Response) {
}

void UGGOnlineManager::OnLeaveLobbyRequested() {
}

void UGGOnlineManager::OnJoinedLobby(bool bIsOwner, bool bSuccess, bool bNotAllowed, FText Error) {
}

void UGGOnlineManager::OnIntroSplashComplete() {
}

void UGGOnlineManager::OnHostLoadingChange(bool bIsHostLoading) {
}

void UGGOnlineManager::OnFriendSessionFound(const FUniqueNetIdRepl& SessionMemberId, const FString& SessionIdStr, int32 NumOfPrivateConnections) {
}

void UGGOnlineManager::OnDLCsUpdated() {
}

void UGGOnlineManager::OnCurrentLobbyInviteTimedOut() {
}

void UGGOnlineManager::OnConsoleSessionMemberUpdated(const FUniqueNetIdRepl& SessionMemberId, const FString& SessionMessage) {
}

bool UGGOnlineManager::IsLoggedInMobilePlatform() const {
    return false;
}

bool UGGOnlineManager::HasClientStartedTravel() const {
    return false;
}

UGGOnlineManager* UGGOnlineManager::GetOnlineManager(const UObject* WorldContext) {
    return NULL;
}

EActiveOSSFlags UGGOnlineManager::GetActiveSubsystemForUI() const {
    return EActiveOSSFlags::None;
}

void UGGOnlineManager::EndBossActivity() {
}

bool UGGOnlineManager::DoesEveryoneOwnDLC(EGoatDLC DLC) const {
    return false;
}

FString UGGOnlineManager::CachedNATTypeString() {
    return TEXT("");
}

void UGGOnlineManager::AttemptAutoLogin() {
}

void UGGOnlineManager::AccountLinkComplete(bool bSuccess) {
}


