#pragma once
#include "CoreMinimal.h"
#include "ELoginState.h"
#include "OnLoginStateChangedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnLoginStateChanged, TEnumAsByte<ELoginState>, OldState, TEnumAsByte<ELoginState>, NewState);

