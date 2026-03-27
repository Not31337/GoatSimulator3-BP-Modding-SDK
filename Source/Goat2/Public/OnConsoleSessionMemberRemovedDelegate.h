#pragma once
#include "CoreMinimal.h"
#include "GameFramework/OnlineReplStructs.h"
#include "OnConsoleSessionMemberRemovedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnConsoleSessionMemberRemoved, const FUniqueNetIdRepl&, SessionMemberId, bool, bIsLobbyOwner);

