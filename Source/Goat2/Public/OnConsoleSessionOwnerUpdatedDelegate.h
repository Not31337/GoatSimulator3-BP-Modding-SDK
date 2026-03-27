#pragma once
#include "CoreMinimal.h"
#include "GameFramework/OnlineReplStructs.h"
#include "OnConsoleSessionOwnerUpdatedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnConsoleSessionOwnerUpdated, const FUniqueNetIdRepl&, SessionOwnerId);

