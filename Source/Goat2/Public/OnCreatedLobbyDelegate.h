#pragma once
#include "CoreMinimal.h"
#include "OnCreatedLobbyDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnCreatedLobby, bool, bSuccess);

