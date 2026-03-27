#pragma once
#include "CoreMinimal.h"
#include "OnPlayerEnteredThroneRoomDelegate.generated.h"

class AGGGoat;
class AGGGoatTower;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnPlayerEnteredThroneRoom, AGGGoat*, Goat, AGGGoatTower*, GoatTower);

