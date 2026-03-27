#pragma once
#include "CoreMinimal.h"
#include "OnPlayerLogoutDelegate.generated.h"

class APlayerController;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnPlayerLogout, APlayerController*, LeavingPlayerController);

