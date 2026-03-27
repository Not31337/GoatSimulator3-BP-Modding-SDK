#pragma once
#include "CoreMinimal.h"
#include "GameFramework/OnlineReplStructs.h"
#include "OnConsoleSessionMemberAddedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnConsoleSessionMemberAdded, const FUniqueNetIdRepl&, SessionMemberId, bool, bIsLobbyOwner);

