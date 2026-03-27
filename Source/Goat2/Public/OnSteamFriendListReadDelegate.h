#pragma once
#include "CoreMinimal.h"
#include "OnSteamFriendListReadDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnSteamFriendListRead, bool, bSuccess);

