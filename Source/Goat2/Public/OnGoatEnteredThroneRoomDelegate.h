#pragma once
#include "CoreMinimal.h"
#include "OnGoatEnteredThroneRoomDelegate.generated.h"

class AGGGoat;
class AGGGoatTower;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnGoatEnteredThroneRoom, AGGGoat*, Goat, AGGGoatTower*, GoatTower);

