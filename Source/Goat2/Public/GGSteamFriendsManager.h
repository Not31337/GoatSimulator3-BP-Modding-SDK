#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "GameFramework/OnlineReplStructs.h"
#include "OnPresenceUpdatedDelegate.h"
#include "OnSteamFriendListReadDelegate.h"
#include "OnSteamFriendListUpdatedDelegate.h"
#include "GGSteamFriendsManager.generated.h"

class UGGLocalPlayer;
class UGGSteamFriendsManager;
class UTexture2D;

UCLASS(Blueprintable, Transient)
class GOAT2_API UGGSteamFriendsManager : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FUniqueNetIdRepl, int32> FriendsAvatarIndexMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UTexture2D*> FriendsAvatarTextureList;
    
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnSteamFriendListUpdated Delegate_OnFriendListUpdated;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnSteamFriendListRead Delegate_OnFriendListRead;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnPresenceUpdated Delegate_OnPresenceUpdated;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UGGLocalPlayer* OwnerLocalPlayer;
    
    UGGSteamFriendsManager();

    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContext"))
    static UGGSteamFriendsManager* GetSteamFriendsManager(const UObject* WorldContext);
    
};

