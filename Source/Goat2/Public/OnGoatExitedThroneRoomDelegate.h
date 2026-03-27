#pragma once
#include "CoreMinimal.h"
#include "OnGoatExitedThroneRoomDelegate.generated.h"

class AGGGoat;
class AGGGoatTower;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnGoatExitedThroneRoom, AGGGoat*, Goat, AGGGoatTower*, GoatTower);

