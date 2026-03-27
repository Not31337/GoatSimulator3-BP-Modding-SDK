#pragma once
#include "CoreMinimal.h"
#include "OnPlayerExitedThroneRoomDelegate.generated.h"

class AGGGoat;
class AGGGoatTower;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnPlayerExitedThroneRoom, AGGGoat*, Goat, AGGGoatTower*, GoatTower);

