#pragma once
#include "CoreMinimal.h"
#include "EGGCachedNATType.h"
#include "OnNatTypeUpdatedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnNatTypeUpdated, EGGCachedNATType, NATType);

