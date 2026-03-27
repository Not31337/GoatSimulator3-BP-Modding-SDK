#pragma once
#include "CoreMinimal.h"
#include "OnPlayersOnDoorButtonUpdatedDelegate.generated.h"

class AGGGoat;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnPlayersOnDoorButtonUpdated, const TArray<AGGGoat*>&, Goats);

