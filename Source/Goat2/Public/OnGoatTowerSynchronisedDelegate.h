#pragma once
#include "CoreMinimal.h"
#include "ETowerSynchronizationEvent.h"
#include "OnGoatTowerSynchronisedDelegate.generated.h"

class AGGGoatTower;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnGoatTowerSynchronised, AGGGoatTower*, GoatTower, ETowerSynchronizationEvent, SynchronizationEvent);

