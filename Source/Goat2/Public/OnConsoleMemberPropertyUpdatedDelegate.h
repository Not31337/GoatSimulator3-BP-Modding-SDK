#pragma once
#include "CoreMinimal.h"
#include "GameFramework/OnlineReplStructs.h"
#include "OnConsoleMemberPropertyUpdatedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnConsoleMemberPropertyUpdated, const FUniqueNetIdRepl&, SessionMemberId, const FString&, MemberProperty);

