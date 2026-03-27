#pragma once
#include "CoreMinimal.h"
#include "OnGamepadChangedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnGamepadChanged, bool, bActive);

