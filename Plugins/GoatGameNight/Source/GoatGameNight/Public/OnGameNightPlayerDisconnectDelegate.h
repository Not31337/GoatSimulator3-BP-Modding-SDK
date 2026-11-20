#pragma once
#include "CoreMinimal.h"
#include "OnGameNightPlayerDisconnectDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnGameNightPlayerDisconnect, int32, PlayerSlot);

