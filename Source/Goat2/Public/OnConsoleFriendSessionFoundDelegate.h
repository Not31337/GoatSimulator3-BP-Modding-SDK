#pragma once
#include "CoreMinimal.h"
#include "GameFramework/OnlineReplStructs.h"
#include "OnConsoleFriendSessionFoundDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FOnConsoleFriendSessionFound, const FUniqueNetIdRepl&, SessionMemberId, const FString&, SessionIdStr, int32, NumberOfPrivateConnections);

