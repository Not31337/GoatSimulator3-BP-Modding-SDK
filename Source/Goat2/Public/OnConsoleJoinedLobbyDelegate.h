#pragma once
#include "CoreMinimal.h"
#include "OnConsoleJoinedLobbyDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_FourParams(FOnConsoleJoinedLobby, bool, bIsOwner, bool, bSuccess, bool, bNotAllowed, FText, Error);

