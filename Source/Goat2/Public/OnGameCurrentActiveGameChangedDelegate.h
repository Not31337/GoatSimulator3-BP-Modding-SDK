#pragma once
#include "CoreMinimal.h"
#include "OnGameCurrentActiveGameChangedDelegate.generated.h"

class AGGPlayerGame_Base;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnGameCurrentActiveGameChanged, AGGPlayerGame_Base*, PlayerGame);

