#pragma once
#include "CoreMinimal.h"
#include "OnTouchEndedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FOnTouchEnded, int32, TouchIndex, float, X, float, Y);

