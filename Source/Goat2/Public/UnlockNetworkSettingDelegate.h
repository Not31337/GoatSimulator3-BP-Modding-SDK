#pragma once
#include "CoreMinimal.h"
#include "UnlockNetworkSettingDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FUnlockNetworkSetting, bool, bSuccess);

