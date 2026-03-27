#pragma once
#include "CoreMinimal.h"
#include "OnTotalSyncedGoatTowersChangedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnTotalSyncedGoatTowersChanged, int32, NewTotalSyncedGoatTowers);

