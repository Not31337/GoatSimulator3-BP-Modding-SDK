#pragma once
#include "CoreMinimal.h"
#include "OnSessionInviteProcessedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnSessionInviteProcessed, bool, bHasPrivilege);

