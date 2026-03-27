#pragma once
#include "CoreMinimal.h"
#include "OnKarmaAcquiredDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnKarmaAcquired, int32, Amount);

