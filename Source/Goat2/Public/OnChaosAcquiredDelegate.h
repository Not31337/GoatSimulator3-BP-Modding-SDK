#pragma once
#include "CoreMinimal.h"
#include "OnChaosAcquiredDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnChaosAcquired, int32, Amount);

