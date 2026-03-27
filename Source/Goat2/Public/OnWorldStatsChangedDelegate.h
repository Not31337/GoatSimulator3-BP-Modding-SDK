#pragma once
#include "CoreMinimal.h"
#include "WorldStats.h"
#include "OnWorldStatsChangedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnWorldStatsChanged, FWorldStats, NewWorldStats);

