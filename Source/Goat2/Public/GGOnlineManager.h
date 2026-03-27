#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "Engine/EngineBaseTypes.h"
#include "Engine/EngineBaseTypes.h"
#include "GameFramework/OnlineReplStructs.h"
#include "AccountLinkedDelegate.h"
#include "EActiveOSSFlags.h"
#include "EGGLobbyUpdateType.h"
#include "EGoatDLC.h"
#include "ELoadingScreenType.h"
#include "ELobbyPrivacySetting.h"
#include "EPopupResponse.h"
#include "ERemovalReason.h"
#include "GGLobbyInformation.h"
#include "GGOnActivityIntentReceivedDelegateDelegate.h"
#include "GGOnPlayerTalkingStateChangedDelegate.h"
#include "OnClientStartedTravelDelegate.h"
#include "OnCreatedLobbyDelegate.h"
#include "OnFailedToStartLevelDelegate.h"
#include "OnFriendListReadDelegate.h"
#include "OnFriendListUpdatedDelegate.h"
#include "OnFriendPresenceUpdatedDelegate.h"
#include "OnLobbyMemberJoinedDelegate.h"
#include "OnLobbyMemberLeftDelegate.h"
#include "OnLobbySearchFailedDelegate.h"
#include "OnLobbyUpdatedDelegate.h"
#include "OnLoggedInAndCheckedOwnershipDelegate.h"
#include "OnLoginStateChangedDelegate.h"
#include "OnLoginTimedOutDelegate.h"
#include "OnNatTypeUpdatedDelegate.h"
#include "OnPlayerDLCsUpdatedDelegate.h"
#include "OnPrivacySettingChangedDelegate.h"
#include "OnReceivedLobbyInviteDelegate.h"
#include "OnSessionDestroyedDelegate.h"
#include "OnSessionPermissionUpdatedDelegate.h"
#include "OnUserJoinedLobbyDelegate.h"
#include "OnUserLeftLobbyDelegate.h"
#include "OnUserPromotedToOwnerDelegate.h"
#include "QueuedOnlinePopups.h"
#include "UnlockNetworkSettingDelegate.h"
#include "GGOnlineManager.generated.h"

class AGGChatBeaconClient;
class AGGChatBeaconHost;
class AGGPlayerController;
class AOnlineBeaconHost;
class UGGGameInstance;
class UGGLocalPlayer;
class UGGMobileOnlineManager;
class UGGOnlineAssetCache;
class UGGOnlineConsoleOSSSessionManager;
class UGGOnlineManager;
class UGGSteamFriendsManager;
class UNetDriver;
class UWorld;

UCLASS(Blueprintable, Transient)
class GOAT2_API UGGOnlineManager : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnFailedToStartLevel Delegate_OnFailedToStartLevel;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnLoginTimedOut Delegate_OnLoginTimedOut;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnLoginStateChanged OnLoginStateChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnLoggedInAndCheckedOwnership OnLoggedInAndCheckedOwnership;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAccountLinked OnAccountLinkingComplete;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UGGOnlineConsoleOSSSessionManager* ConsoleSessionManager;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGGLobbyInformation CurrentLobby;
    
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnPlayerDLCsUpdated Delegate_OnDLCsUpdated;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnCreatedLobby Delegate_OnCreatedLobby;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnUserJoinedLobby Delegate_OnJoinedLobby;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnUserLeftLobby Delegate_OnLeftLobby;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnLobbySearchFailed Delegate_OnLobbySearchFailed;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnUserPromotedToOwner Delegate_OnUserPromotedToOwner;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FUnlockNetworkSetting Delegate_UnlockNetworkSettings;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnLobbyUpdated Delegate_OnLobbyUpdated;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnReceivedLobbyInvite Delegate_OnReceivedLobbyInvite;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnLobbyMemberJoined Delegate_OnLobbyMemberJoined;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnLobbyMemberLeft Delegate_OnLobbyMemberLeft;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnClientStartedTravel Delegate_OnClientStartedTravel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bKeepPartyWhenReturningToTitle;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnSessionDestroyed Delegate_OnSessionDestroyed;
    
protected:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnSessionPermissionUpdated Delegate_OnSessionPermissionUpdated;
    
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnFriendListRead Delegate_OnFriendListRead;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnFriendPresenceUpdated Delegate_OnFriendPresenceUpdated;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnFriendListUpdated Delegate_OnFriendListUpdated;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AOnlineBeaconHost* ChatBeaconHost;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AGGChatBeaconHost* ChatBeaconHostObject;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AGGChatBeaconClient* ChatBeaconClient;
    
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnNatTypeUpdated OnNatTypeUpdated;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FQueuedOnlinePopups> QueuedOnlinePopups;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UGGOnlineAssetCache* OnlineAssetCache;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UGGLocalPlayer* OwnerLocalPlayer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UGGGameInstance* GameInstance;
    
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGGOnPlayerTalkingStateChanged Delegate_OnPlayerTalkingStateChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGGOnActivityIntentReceivedDelegate Delegate_OnActivityIntentReceived;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UGGMobileOnlineManager* MobileOnlineManager;
    
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnPrivacySettingChanged OnPrivacySettingsChanged;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UGGSteamFriendsManager* SteamFriendsManager;
    
public:
    UGGOnlineManager();

    UFUNCTION(BlueprintCallable)
    void UpdatePresence();
    
protected:
    UFUNCTION(BlueprintCallable)
    void UpdateManagerPresenceCache();
    
private:
    UFUNCTION(BlueprintCallable)
    void UpdateCachedFriendsList();
    
public:
    UFUNCTION(BlueprintCallable)
    void StartClientTravel(const FString& TravelURL);
    
    UFUNCTION(BlueprintCallable)
    void SetOnlineAssetCacheSize(int32 NumBytes);
    
protected:
    UFUNCTION(BlueprintCallable)
    void SessionMemberRemoved(const FUniqueNetIdRepl& UserId, bool bIsLobbyOwner);
    
    UFUNCTION(BlueprintCallable)
    void SessionMemberAdded(const FUniqueNetIdRepl& UserId, bool bIsLobbyOwner);
    
private:
    UFUNCTION(BlueprintCallable)
    void SearchForLobbyWithJoinCodeCompleted(bool bSuccess, const TArray<FGGLobbyInformation> InFoundLobbies);
    
    UFUNCTION(BlueprintCallable)
    void SearchForLobbyCompleted_CheckJoinCode(bool bSuccess, const TArray<FGGLobbyInformation> InFoundLobbies);
    
public:
    UFUNCTION(BlueprintCallable)
    void SchedulePresenceUpdate(float NextUpdate);
    
    UFUNCTION(BlueprintCallable)
    void ReadPrivilegePopupResponse(const FString& ID, UObject* Object, const FString& ButtonID, EPopupResponse Response);
    
    UFUNCTION(BlueprintCallable)
    void ReadPopupResponse(const FString& ID, UObject* Object, const FString& ButtonID, EPopupResponse Response);
    
    UFUNCTION(BlueprintCallable)
    void ReadFirstRunPopupResponse(const FString& ID, UObject* Object, const FString& ButtonID, EPopupResponse Response);
    
protected:
    UFUNCTION(BlueprintCallable)
    void PreLoadMap(const FString& MapName);
    
    UFUNCTION(BlueprintCallable)
    void PostLoadMapWithWorld(UWorld* World);
    
public:
    UFUNCTION(BlueprintCallable)
    void OnTravelFailure(UWorld* World, TEnumAsByte<ETravelFailure::Type> FailureType, const FString& ErrorMessage);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnSteamSessionInviteAcceptSuccess();
    
    UFUNCTION(BlueprintCallable)
    void OnSteamPrivacyUpdated(TEnumAsByte<ELobbyPrivacySetting> Privacy);
    
    UFUNCTION(BlueprintCallable)
    void OnSteamPresenceUpdated(const FUniqueNetIdRepl& UniqueNetId);
    
    UFUNCTION(BlueprintCallable)
    void OnSteamFriendsUpdated();
    
    UFUNCTION(BlueprintCallable)
    void OnSteamFriendsListRead(bool bSuccess);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnSessionUnlocked();
    
    UFUNCTION(BlueprintCallable)
    void OnSessionMemberX1KeepAliveUpdated(const FUniqueNetIdRepl& UserId, const FString& PropertyValue);
    
    UFUNCTION(BlueprintCallable)
    void OnSessionMembersInfoUpdate(const TArray<FUniqueNetIdRepl> UserIds);
    
    UFUNCTION(BlueprintCallable)
    void OnSessionMemberPropertyUpdate(const FUniqueNetIdRepl& UserId, const FString& PropertyValue);
    
    UFUNCTION(BlueprintCallable)
    void OnSessionMemberDLCInfoUpdated(const FUniqueNetIdRepl& UserId, const FString& PropertyValue);
    
    UFUNCTION(BlueprintCallable)
    void OnSessionLocked();
    
    UFUNCTION(BlueprintCallable)
    void OnSessionInviteProcessed(bool bHasPrivilege);
    
    UFUNCTION()
    void OnOverlayJoinAccepted(uint64 UIEventId);
    
    UFUNCTION(BlueprintCallable)
    void OnOverlayInviteAccepted(const FString& InviteId);
    
    UFUNCTION(BlueprintCallable)
    void OnOtherUserPromoted();
    
public:
    UFUNCTION(BlueprintCallable)
    void OnNetworkFailure(UWorld* World, UNetDriver* NetDriver, TEnumAsByte<ENetworkFailure::Type> FailureType, const FString& ErrorMessage);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnMemberAttributeUpdate(bool bSuccess);
    
    UFUNCTION(BlueprintCallable)
    void OnLocalUserPromoted();
    
    UFUNCTION(BlueprintCallable)
    void OnLobbyUpdate(TEnumAsByte<EGGLobbyUpdateType> LobbyUpdateType);
    
    UFUNCTION(BlueprintCallable)
    void OnLobbyOwnerUpdated(const FUniqueNetIdRepl& UserId);
    
    UFUNCTION(BlueprintCallable)
    void OnLobbyInviteReceived(const FString& InviterName, const FString& LobbyId);
    
    UFUNCTION(BlueprintCallable)
    void OnLobbyFinishedSearching(bool bSuccess);
    
    UFUNCTION(BlueprintCallable)
    void OnLobbyDestroyed();
    
    UFUNCTION(BlueprintCallable)
    void OnLobbyCreated(bool bSuccess);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnLoadingScreenRemoved(AGGPlayerController* Controller, ELoadingScreenType InType, ERemovalReason RemovalReason);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnLeftLobby(bool bWasKicked);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnLeaveSplitScreenForInviteResponse(const FString& ID, UObject* Object, const FString& ButtonID, EPopupResponse Response);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnLeaveLobbyRequested();
    
    UFUNCTION(BlueprintCallable)
    void OnJoinedLobby(bool bIsOwner, bool bSuccess, bool bNotAllowed, FText Error);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnIntroSplashComplete();
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnHostLoadingChange(bool bIsHostLoading);
    
    UFUNCTION(BlueprintCallable)
    void OnFriendSessionFound(const FUniqueNetIdRepl& SessionMemberId, const FString& SessionIdStr, int32 NumOfPrivateConnections);
    
public:
    UFUNCTION(BlueprintCallable)
    void OnDLCsUpdated();
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnCurrentLobbyInviteTimedOut();
    
    UFUNCTION(BlueprintCallable)
    void OnConsoleSessionMemberUpdated(const FUniqueNetIdRepl& SessionMemberId, const FString& SessionMessage);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsLoggedInMobilePlatform() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasClientStartedTravel() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContext"))
    static UGGOnlineManager* GetOnlineManager(const UObject* WorldContext);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EActiveOSSFlags GetActiveSubsystemForUI() const;
    
    UFUNCTION(BlueprintCallable)
    void EndBossActivity();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool DoesEveryoneOwnDLC(EGoatDLC DLC) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString CachedNATTypeString();
    
    UFUNCTION(BlueprintCallable)
    void AttemptAutoLogin();
    
private:
    UFUNCTION(BlueprintCallable)
    void AccountLinkComplete(bool bSuccess);
    
};

