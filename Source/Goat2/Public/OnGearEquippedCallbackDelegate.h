#pragma once
#include "CoreMinimal.h"
#include "OnGearEquippedCallbackDelegate.generated.h"

class UGGGoatGearManager;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_TwoParams(FOnGearEquippedCallback, bool, bWasCancelled, UGGGoatGearManager*, GearManager);

