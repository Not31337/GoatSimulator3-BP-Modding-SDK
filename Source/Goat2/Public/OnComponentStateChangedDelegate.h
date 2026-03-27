#pragma once
#include "CoreMinimal.h"
#include "OnComponentStateChangedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnComponentStateChanged, bool, bIsInitialState, uint8, NewState);

