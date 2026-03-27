#pragma once
#include "CoreMinimal.h"
#include "OnPlayerLoginDelegate.generated.h"

class APlayerController;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnPlayerLogin, APlayerController*, NewPlayerController);

