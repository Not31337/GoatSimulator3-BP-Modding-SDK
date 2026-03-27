#pragma once
#include "CoreMinimal.h"
#include "OnPlayerInfoChangedDelegate.generated.h"

class AGGGameState;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnPlayerInfoChanged, AGGGameState*, GameState);

