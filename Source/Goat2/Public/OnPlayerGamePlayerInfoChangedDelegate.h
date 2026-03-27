#pragma once
#include "CoreMinimal.h"
#include "OnPlayerGamePlayerInfoChangedDelegate.generated.h"

class AGGPlayerGame_Base;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnPlayerGamePlayerInfoChanged, AGGPlayerGame_Base*, PlayerGame);

