#pragma once
#include "CoreMinimal.h"
#include "OnUserJoinedLobbyDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnUserJoinedLobby, bool, bSuccess);

