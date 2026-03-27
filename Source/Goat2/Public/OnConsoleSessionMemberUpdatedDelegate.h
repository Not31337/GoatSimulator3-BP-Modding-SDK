#pragma once
#include "CoreMinimal.h"
#include "GameFramework/OnlineReplStructs.h"
#include "OnConsoleSessionMemberUpdatedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnConsoleSessionMemberUpdated, const FUniqueNetIdRepl&, SessionMemberId, const FString&, CustomAttribute);

