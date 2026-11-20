#pragma once
#include "CoreMinimal.h"
#include "OnGameNightPlayerConnectDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnGameNightPlayerConnect, int32, PlayerSlot, const FString&, PlayerUUID);

