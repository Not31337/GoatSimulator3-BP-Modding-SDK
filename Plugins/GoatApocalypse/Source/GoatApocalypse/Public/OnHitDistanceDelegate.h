#pragma once
#include "CoreMinimal.h"
#include "OnHitDistanceDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnHitDistance, int32, DistanceHit);

