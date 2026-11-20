#pragma once
#include "CoreMinimal.h"
#include "OnSageDockModeChangedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnSageDockModeChanged, bool, bIsNowDocked);

