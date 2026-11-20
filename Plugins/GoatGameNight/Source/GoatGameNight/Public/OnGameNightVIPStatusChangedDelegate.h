#pragma once
#include "CoreMinimal.h"
#include "OnGameNightVIPStatusChangedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnGameNightVIPStatusChanged, int32, PlayerSlot);

