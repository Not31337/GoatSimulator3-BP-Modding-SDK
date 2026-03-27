#include "GGOnlineFunctionLibrary.h"

UGGOnlineFunctionLibrary::UGGOnlineFunctionLibrary() {
}

void UGGOnlineFunctionLibrary::UpdateGameSessionSettings(const UObject* WorldContextObject) {
}

void UGGOnlineFunctionLibrary::ToggleRemotePlayerVoiceChat(const UObject* WorldContextObject, FUniqueNetIdRepl UserUniqueNetId) {
}

void UGGOnlineFunctionLibrary::ToggleLocalPlayerVoiceChat(const UObject* WorldContextObject, FOnToggleLocalPlayerVoiceChatComplete OnToggleLocalPlayerVoiceChatComplete) {
}

void UGGOnlineFunctionLibrary::StartLevelOffline(const UObject* WorldContextObject, const FString& DestinationLevel, const FString& Options) {
}

void UGGOnlineFunctionLibrary::ShowProfileUI(const UObject* WorldContextObject, FUniqueNetIdRepl UserNetId) {
}

bool UGGOnlineFunctionLibrary::ShouldShowEpicUnLinkAccount(const UObject* WorldContextObject) {
    return false;
}

bool UGGOnlineFunctionLibrary::ShouldShowEpicLinkAccount(const UObject* WorldContextObject) {
    return false;
}

void UGGOnlineFunctionLibrary::SetUpLocalPlayerVoiceChat(const UObject* WorldContextObject, const FString& OverrideValue) {
}

void UGGOnlineFunctionLibrary::SetMultiplayerLocked(const UObject* WorldContextObject, bool bNewLocked) {
}

void UGGOnlineFunctionLibrary::SetMainMenuStartingLevel(const UObject* WorldContextObject, bool bIsStarting) {
}

void UGGOnlineFunctionLibrary::SetLobbyPrivacySetting(const UObject* WorldContextObject, TEnumAsByte<ELobbyPrivacySetting> NewSetting) {
}

void UGGOnlineFunctionLibrary::SendLobbyInvite(const UObject* WorldContextObject, FUniqueNetIdRepl UserNetId) {
}

void UGGOnlineFunctionLibrary::SendBeaconChatMessage(const UObject* WorldContextObject, const FString& ChatMessage) {
}

void UGGOnlineFunctionLibrary::SearchForLobbies(const UObject* WorldContextObject) {
}

void UGGOnlineFunctionLibrary::RejectLobbyInvite(const UObject* WorldContextObject, const FString& InviteId) {
}

void UGGOnlineFunctionLibrary::RejectAllLobbyInvites(const UObject* WorldContextObject) {
}

void UGGOnlineFunctionLibrary::ReadFriendList(const UObject* WorldContextObject) {
}

void UGGOnlineFunctionLibrary::PromoteMember(const UObject* WorldContextObject, FUniqueNetIdRepl MemberNetId) {
}

void UGGOnlineFunctionLibrary::PrepareNavigationToFriendsMenu(const UObject* WorldContextObject, FOnFriendsMenuNavigationPreparationComplete OnFriendsMenuNavigationPreparationComplete) {
}

void UGGOnlineFunctionLibrary::LogoutAndForget(const UObject* WorldContextObject) {
}

void UGGOnlineFunctionLibrary::Logout(const UObject* WorldContextObject) {
}

void UGGOnlineFunctionLibrary::LoginAndConnectAccount(const UObject* WorldContextObject) {
}

void UGGOnlineFunctionLibrary::LobbyStartLevel(const UObject* WorldContextObject, const FString& DestinationLevel, const FString& Options) {
}

void UGGOnlineFunctionLibrary::LeaveLobby(const UObject* WorldContextObject) {
}

void UGGOnlineFunctionLibrary::KickMember(const UObject* WorldContextObject, FUniqueNetIdRepl MemberNetId) {
}

void UGGOnlineFunctionLibrary::JoinLobbyWithJoinCode(const UObject* WorldContextObject, const FString& JoinCode) {
}

void UGGOnlineFunctionLibrary::JoinLobby_SearchResult(const UObject* WorldContextObject, const FString& LobbyId) {
}

void UGGOnlineFunctionLibrary::JoinLobby_FindWithId(const UObject* WorldContextObject, const FString& LobbyId, FUniqueNetIdRepl FriendNetId, bool bBypassVersionCheck) {
}

void UGGOnlineFunctionLibrary::JoinLobby_CurrentInvite(const UObject* WorldContextObject, const FString& InviteId) {
}

bool UGGOnlineFunctionLibrary::IsValidLobbyMember(const FGGLobbyMember& InLobbyMember) {
    return false;
}

bool UGGOnlineFunctionLibrary::IsValidFriend(const FGGOnlineFriend& InOnlineFriend) {
    return false;
}

bool UGGOnlineFunctionLibrary::IsUserOnline(const UObject* WorldContextObject, bool& IsCreatingLobby, bool& IsInSplitScreen) {
    return false;
}

bool UGGOnlineFunctionLibrary::IsStartingSession(const UObject* WorldContextObject) {
    return false;
}

bool UGGOnlineFunctionLibrary::IsSearchingForSessions(const UObject* WorldContextObject) {
    return false;
}

bool UGGOnlineFunctionLibrary::IsRunningOnSteamDeck(const UObject* WorldContextObject) {
    return false;
}

bool UGGOnlineFunctionLibrary::IsRemotePlayerMuted(const UObject* WorldContextObject, FUniqueNetIdRepl UserUniqueNetId) {
    return false;
}

bool UGGOnlineFunctionLibrary::IsReadingFriendList(const UObject* WorldContextObject) {
    return false;
}

bool UGGOnlineFunctionLibrary::IsPlayingOffline(const UObject* WorldContextObject) {
    return false;
}

bool UGGOnlineFunctionLibrary::IsPlayerConnectedToInternet(const UObject* WorldContextObject) {
    return false;
}

bool UGGOnlineFunctionLibrary::IsOnlineManagerBusy(const UObject* WorldContextObject, bool bConsiderLoggingInAsBusy) {
    return false;
}

bool UGGOnlineFunctionLibrary::IsNetIdMemberOfLobby(const UObject* WorldContextObject, FUniqueNetIdRepl UserUniqueNetId, FGGLobbyMember& FoundMember) {
    return false;
}

bool UGGOnlineFunctionLibrary::IsNetIdLobbyOwner(const UObject* WorldContextObject, FUniqueNetIdRepl UserUniqueNetId) {
    return false;
}

bool UGGOnlineFunctionLibrary::IsMultiplayerLocked(const UObject* WorldContextObject) {
    return false;
}

bool UGGOnlineFunctionLibrary::IsMainMenuStartingLevel(const UObject* WorldContextObject) {
    return false;
}

bool UGGOnlineFunctionLibrary::IsLowendMobileDevice(const UObject* WorldContextObject) {
    return false;
}

bool UGGOnlineFunctionLibrary::IsLoggingIn(const UObject* WorldContextObject) {
    return false;
}

bool UGGOnlineFunctionLibrary::IsLoggedInMobile(const UObject* WorldContextObject) {
    return false;
}

bool UGGOnlineFunctionLibrary::IsLoggedIn(const UObject* WorldContextObject) {
    return false;
}

bool UGGOnlineFunctionLibrary::IsLocalPlayerMuted(const UObject* WorldContextObject) {
    return false;
}

bool UGGOnlineFunctionLibrary::IsLocalLobbyMember(const UObject* WorldContextObject, FUniqueNetIdRepl UserUniqueNetId) {
    return false;
}

bool UGGOnlineFunctionLibrary::IsLocalAccountUser(const UObject* WorldContextObject, const FUniqueNetIdRepl& UserNetId) {
    return false;
}

bool UGGOnlineFunctionLibrary::IsInMainMenu(const UObject* WorldContextObject) {
    return false;
}

bool UGGOnlineFunctionLibrary::IsInLobby(const UObject* WorldContextObject, bool& bIsOwner) {
    return false;
}

bool UGGOnlineFunctionLibrary::IsHostTimingOut(const UObject* WorldContextObject, float DeltaTimeCheck) {
    return false;
}

bool UGGOnlineFunctionLibrary::IsHostStartingServer(const UObject* WorldContextObject) {
    return false;
}

bool UGGOnlineFunctionLibrary::IsForcedAlwaysOnline(const UObject* WorldContextObject) {
    return false;
}

bool UGGOnlineFunctionLibrary::IsEpicAccountLinked(const UObject* WorldContextObject) {
    return false;
}

bool UGGOnlineFunctionLibrary::IsEOSHeadlessAccount(const UObject* WorldContextObject) {
    return false;
}

bool UGGOnlineFunctionLibrary::IsEndingSession(const UObject* WorldContextObject) {
    return false;
}

bool UGGOnlineFunctionLibrary::IsClientTimingOut(const UObject* WorldContextObject, float DeltaTimeCheck) {
    return false;
}

bool UGGOnlineFunctionLibrary::HasValidChatBeaconConnection(const UObject* WorldContextObject) {
    return false;
}

bool UGGOnlineFunctionLibrary::HasLoginTimedOut(const UObject* WorldContextObject) {
    return false;
}

bool UGGOnlineFunctionLibrary::HasDummyLobby(const UObject* WorldContextObject) {
    return false;
}

bool UGGOnlineFunctionLibrary::HasDummyFriends(const UObject* WorldContextObject) {
    return false;
}

FString UGGOnlineFunctionLibrary::GetUsername(const UObject* WorldContextObject) {
    return TEXT("");
}

FUniqueNetIdRepl UGGOnlineFunctionLibrary::GetUniqueNetIDReplFromPlayerState(const AGGPlayerState* PlayerState) {
    return FUniqueNetIdRepl{};
}

FUniqueNetIdRepl UGGOnlineFunctionLibrary::GetUniqueNetIDRepl(const UObject* WorldContextObject, bool bWarnIfNotLoggedIn) {
    return FUniqueNetIdRepl{};
}

AGGPlayerState* UGGOnlineFunctionLibrary::GetPlayerStateFromUniqueNetId(const UObject* WorldContextObject, FUniqueNetIdRepl UserNetId) {
    return NULL;
}

bool UGGOnlineFunctionLibrary::GetOnlineFriendWithUsername(const UObject* WorldContextObject, const FString& UserName, FGGOnlineFriend& OutFriend) {
    return false;
}

bool UGGOnlineFunctionLibrary::GetOnlineFriendFromPlayerState(APlayerState* PlayerState, FGGOnlineFriend& OutFriend) {
    return false;
}

bool UGGOnlineFunctionLibrary::GetOnlineFriend(const UObject* WorldContextObject, FUniqueNetIdRepl UserNetId, FGGOnlineFriend& OutFriend) {
    return false;
}

TEnumAsByte<ELoginState> UGGOnlineFunctionLibrary::GetLoginState(const UObject* WorldContextObject) {
    return LS_NotLoggedIn;
}

TEnumAsByte<ELobbyPrivacySetting> UGGOnlineFunctionLibrary::GetLobbyPrivacySetting(const UObject* WorldContextObject) {
    return LPS_Open;
}

TArray<FGGLobbyMember> UGGOnlineFunctionLibrary::GetLobbyMembers(const UObject* WorldContextObject) {
    return TArray<FGGLobbyMember>();
}

bool UGGOnlineFunctionLibrary::GetLobbyMemberObjectArray(const UObject* WorldContextObject, TArray<UGGLobbyMemberObject*>& OutLobbyMembers, UObject* Owner) {
    return false;
}

FString UGGOnlineFunctionLibrary::GetJoinCode(const UObject* WorldContextObject) {
    return TEXT("");
}

FString UGGOnlineFunctionLibrary::GetGamerPicUri(const UObject* WorldContextObject) {
    return TEXT("");
}

bool UGGOnlineFunctionLibrary::GetFriendObjectArray(const UObject* WorldContextObject, TArray<UGGOnlineFriendObject*>& OutFriends, UObject* Owner) {
    return false;
}

bool UGGOnlineFunctionLibrary::GetFriendListObjects(const UObject* WorldContextObject, TArray<UObject*> OutFriends) {
    return false;
}

bool UGGOnlineFunctionLibrary::GetFriendList(const UObject* WorldContextObject, TArray<FGGOnlineFriend>& OutFriends) {
    return false;
}

TArray<FGGLobbyInformation> UGGOnlineFunctionLibrary::GetFoundLobbies(const UObject* WorldContextObject) {
    return TArray<FGGLobbyInformation>();
}

FGGLobbyInformation UGGOnlineFunctionLibrary::GetCurrentLobby(const UObject* WorldContextObject) {
    return FGGLobbyInformation{};
}

EGGCachedNATType UGGOnlineFunctionLibrary::GetCachedNat(const UObject* WorldContextObject) {
    return EGGCachedNATType::CNT_Open;
}

void UGGOnlineFunctionLibrary::GenerateJoinCode(const UObject* WorldContextObject, FOnJoinCodeGenerated OnJoinCodeCreatedDelegate) {
}

bool UGGOnlineFunctionLibrary::DoesEveryoneOwn(const UObject* WorldContextObject, EGoatDLC DLC) {
    return false;
}

void UGGOnlineFunctionLibrary::CreateLobbyAndStartLevel(const UObject* WorldContextObject, const FString& Destination, const FString& Options) {
}

void UGGOnlineFunctionLibrary::CreateLobbyAndInviteUser(const UObject* WorldContextObject, FUniqueNetIdRepl UserToInvite) {
}

void UGGOnlineFunctionLibrary::CreateLobby(const UObject* WorldContextObject) {
}

bool UGGOnlineFunctionLibrary::CompareUniqueNetIdRepls(const FUniqueNetIdRepl& lhs, const FUniqueNetIdRepl& rhs) {
    return false;
}

bool UGGOnlineFunctionLibrary::CompareOnlineFriendObjects(UGGOnlineFriendObject* Friend, UGGOnlineFriendObject* Other) {
    return false;
}

void UGGOnlineFunctionLibrary::ClearCachedFriendList(const UObject* WorldContextObject) {
}

void UGGOnlineFunctionLibrary::CheckPrivilege(const UObject* WorldContextObject, TEnumAsByte<EQueryPrivilege> Privilege, FOnPrivilegeChecked OnPrivilegeChecked) {
}

void UGGOnlineFunctionLibrary::CheckOnlinePlayEnabled(const UObject* WorldContextObject, FOnOnlinePlayEnabledChecked OnOnlinePlayEnabledChecked) {
}

bool UGGOnlineFunctionLibrary::CanCreateLobby(const UObject* WorldContextObject) {
    return false;
}


