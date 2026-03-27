#pragma once
#include "CoreMinimal.h"
#include "OnEventEnabledChangedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnEventEnabledChanged, bool, bNewEnabled);

