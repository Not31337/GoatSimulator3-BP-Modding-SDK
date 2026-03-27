#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "OnHandlerPlayerWorldAreaExitedDelegate.generated.h"

class AGGGoat;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnHandlerPlayerWorldAreaExited, AGGGoat*, Goat, FGameplayTag, LeftArea);

