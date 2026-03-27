#pragma once
#include "CoreMinimal.h"
#include "OnPlayerEnteredAreaDelegate.generated.h"

class AGGPlayerState;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnPlayerEnteredArea, AGGPlayerState*, Player, bool, bLocalPlayer);

