#pragma once
#include "CoreMinimal.h"
#include "OnConsoleLeftLobbyDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnConsoleLeftLobby, bool, bWasKicked);

