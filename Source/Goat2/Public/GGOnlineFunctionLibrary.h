#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "GameFramework/OnlineReplStructs.h"
#include "EGGCachedNATType.h"
#include "EGoatDLC.h"
#include "ELobbyPrivacySetting.h"
#include "ELoginState.h"
#include "EQueryPrivilege.h"
#include "GGLobbyInformation.h"
#include "GGLobbyMember.h"
#include "GGOnlineFriend.h"
#include "OnFriendsMenuNavigationPreparationCompleteDelegate.h"
#include "OnJoinCodeGeneratedDelegate.h"
#include "OnOnlinePlayEnabledCheckedDelegate.h"
#include "OnPrivilegeCheckedDelegate.h"
#include "OnToggleLocalPlayerVoiceChatCompleteDelegate.h"
#include "GGOnlineFunctionLibrary.generated.h"

class AGGPlayerState;
class APlayerState;
class UGGLobbyMemberObject;
class UGGOnlineFriendObject;

UCLASS(Blueprintable)
class GOAT2_API UGGOnlineFunctionLibrary : public UObject {
    GENERATED_BODY()
public:
    UGGOnlineFunctionLibrary();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void UpdateGameSessionSettings(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void ToggleRemotePlayerVoiceChat(const UObject* WorldContextObject, FUniqueNetIdRepl UserUniqueNetId);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void ToggleLocalPlayerVoiceChat(const UObject* WorldContextObject, FOnToggleLocalPlayerVoiceChatComplete OnToggleLocalPlayerVoiceChatComplete);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void StartLevelOffline(const UObject* WorldContextObject, const FString& DestinationLevel, const FString& Options);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void ShowProfileUI(const UObject* WorldContextObject, FUniqueNetIdRepl UserNetId);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool ShouldShowEpicUnLinkAccount(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool ShouldShowEpicLinkAccount(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void SetUpLocalPlayerVoiceChat(const UObject* WorldContextObject, const FString& OverrideValue);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void SetMultiplayerLocked(const UObject* WorldContextObject, bool bNewLocked);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void SetMainMenuStartingLevel(const UObject* WorldContextObject, bool bIsStarting);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void SetLobbyPrivacySetting(const UObject* WorldContextObject, TEnumAsByte<ELobbyPrivacySetting> NewSetting);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void SendLobbyInvite(const UObject* WorldContextObject, FUniqueNetIdRepl UserNetId);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void SendBeaconChatMessage(const UObject* WorldContextObject, const FString& ChatMessage);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void SearchForLobbies(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void RejectLobbyInvite(const UObject* WorldContextObject, const FString& InviteId);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void RejectAllLobbyInvites(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void ReadFriendList(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void PromoteMember(const UObject* WorldContextObject, FUniqueNetIdRepl MemberNetId);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void PrepareNavigationToFriendsMenu(const UObject* WorldContextObject, FOnFriendsMenuNavigationPreparationComplete OnFriendsMenuNavigationPreparationComplete);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void LogoutAndForget(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void Logout(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void LoginAndConnectAccount(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void LobbyStartLevel(const UObject* WorldContextObject, const FString& DestinationLevel, const FString& Options);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void LeaveLobby(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void KickMember(const UObject* WorldContextObject, FUniqueNetIdRepl MemberNetId);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void JoinLobbyWithJoinCode(const UObject* WorldContextObject, const FString& JoinCode);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void JoinLobby_SearchResult(const UObject* WorldContextObject, const FString& LobbyId);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void JoinLobby_FindWithId(const UObject* WorldContextObject, const FString& LobbyId, FUniqueNetIdRepl FriendNetId, bool bBypassVersionCheck);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void JoinLobby_CurrentInvite(const UObject* WorldContextObject, const FString& InviteId);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsValidLobbyMember(const FGGLobbyMember& InLobbyMember);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsValidFriend(const FGGOnlineFriend& InOnlineFriend);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool IsUserOnline(const UObject* WorldContextObject, bool& IsCreatingLobby, bool& IsInSplitScreen);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool IsStartingSession(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool IsSearchingForSessions(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool IsRunningOnSteamDeck(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool IsRemotePlayerMuted(const UObject* WorldContextObject, FUniqueNetIdRepl UserUniqueNetId);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool IsReadingFriendList(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool IsPlayingOffline(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool IsPlayerConnectedToInternet(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool IsOnlineManagerBusy(const UObject* WorldContextObject, bool bConsiderLoggingInAsBusy);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool IsNetIdMemberOfLobby(const UObject* WorldContextObject, FUniqueNetIdRepl UserUniqueNetId, FGGLobbyMember& FoundMember);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool IsNetIdLobbyOwner(const UObject* WorldContextObject, FUniqueNetIdRepl UserUniqueNetId);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool IsMultiplayerLocked(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool IsMainMenuStartingLevel(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool IsLowendMobileDevice(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool IsLoggingIn(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool IsLoggedInMobile(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool IsLoggedIn(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool IsLocalPlayerMuted(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool IsLocalLobbyMember(const UObject* WorldContextObject, FUniqueNetIdRepl UserUniqueNetId);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool IsLocalAccountUser(const UObject* WorldContextObject, const FUniqueNetIdRepl& UserNetId);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool IsInMainMenu(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool IsInLobby(const UObject* WorldContextObject, bool& bIsOwner);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool IsHostTimingOut(const UObject* WorldContextObject, float DeltaTimeCheck);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool IsHostStartingServer(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool IsForcedAlwaysOnline(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool IsEpicAccountLinked(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool IsEOSHeadlessAccount(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool IsEndingSession(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool IsClientTimingOut(const UObject* WorldContextObject, float DeltaTimeCheck);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool HasValidChatBeaconConnection(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool HasLoginTimedOut(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool HasDummyLobby(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool HasDummyFriends(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static FString GetUsername(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FUniqueNetIdRepl GetUniqueNetIDReplFromPlayerState(const AGGPlayerState* PlayerState);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static FUniqueNetIdRepl GetUniqueNetIDRepl(const UObject* WorldContextObject, bool bWarnIfNotLoggedIn);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static AGGPlayerState* GetPlayerStateFromUniqueNetId(const UObject* WorldContextObject, FUniqueNetIdRepl UserNetId);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool GetOnlineFriendWithUsername(const UObject* WorldContextObject, const FString& UserName, FGGOnlineFriend& OutFriend);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool GetOnlineFriendFromPlayerState(APlayerState* PlayerState, FGGOnlineFriend& OutFriend);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool GetOnlineFriend(const UObject* WorldContextObject, FUniqueNetIdRepl UserNetId, FGGOnlineFriend& OutFriend);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static TEnumAsByte<ELoginState> GetLoginState(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static TEnumAsByte<ELobbyPrivacySetting> GetLobbyPrivacySetting(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static TArray<FGGLobbyMember> GetLobbyMembers(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool GetLobbyMemberObjectArray(const UObject* WorldContextObject, TArray<UGGLobbyMemberObject*>& OutLobbyMembers, UObject* Owner);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static FString GetJoinCode(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static FString GetGamerPicUri(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool GetFriendObjectArray(const UObject* WorldContextObject, TArray<UGGOnlineFriendObject*>& OutFriends, UObject* Owner);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool GetFriendListObjects(const UObject* WorldContextObject, TArray<UObject*> OutFriends);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool GetFriendList(const UObject* WorldContextObject, TArray<FGGOnlineFriend>& OutFriends);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static TArray<FGGLobbyInformation> GetFoundLobbies(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static FGGLobbyInformation GetCurrentLobby(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static EGGCachedNATType GetCachedNat(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void GenerateJoinCode(const UObject* WorldContextObject, FOnJoinCodeGenerated OnJoinCodeCreatedDelegate);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool DoesEveryoneOwn(const UObject* WorldContextObject, EGoatDLC DLC);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void CreateLobbyAndStartLevel(const UObject* WorldContextObject, const FString& Destination, const FString& Options);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void CreateLobbyAndInviteUser(const UObject* WorldContextObject, FUniqueNetIdRepl UserToInvite);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void CreateLobby(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool CompareUniqueNetIdRepls(const FUniqueNetIdRepl& lhs, const FUniqueNetIdRepl& rhs);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool CompareOnlineFriendObjects(UGGOnlineFriendObject* Friend, UGGOnlineFriendObject* Other);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void ClearCachedFriendList(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void CheckPrivilege(const UObject* WorldContextObject, TEnumAsByte<EQueryPrivilege> Privilege, FOnPrivilegeChecked OnPrivilegeChecked);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void CheckOnlinePlayEnabled(const UObject* WorldContextObject, FOnOnlinePlayEnabledChecked OnOnlinePlayEnabledChecked);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool CanCreateLobby(const UObject* WorldContextObject);
    
};

