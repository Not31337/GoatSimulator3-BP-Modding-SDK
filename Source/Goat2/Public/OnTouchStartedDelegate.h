#pragma once
#include "CoreMinimal.h"
#include "OnTouchStartedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FOnTouchStarted, int32, TouchIndex, float, X, float, Y);

