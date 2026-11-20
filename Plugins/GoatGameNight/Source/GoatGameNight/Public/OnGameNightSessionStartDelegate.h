#pragma once
#include "CoreMinimal.h"
#include "OnGameNightSessionStartDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnGameNightSessionStart, bool, IsWebController);

