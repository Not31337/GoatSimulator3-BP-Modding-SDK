#pragma once
#include "CoreMinimal.h"
#include "OnGameNightDeviceRemovedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnGameNightDeviceRemoved, int32, PlayerSlot);

