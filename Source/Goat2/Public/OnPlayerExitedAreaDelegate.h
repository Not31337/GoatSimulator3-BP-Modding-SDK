#pragma once
#include "CoreMinimal.h"
#include "OnPlayerExitedAreaDelegate.generated.h"

class AGGPlayerState;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnPlayerExitedArea, AGGPlayerState*, Player, bool, bLocalPlayer);

