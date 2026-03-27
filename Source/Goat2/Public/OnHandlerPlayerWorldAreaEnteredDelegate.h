#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "OnHandlerPlayerWorldAreaEnteredDelegate.generated.h"

class AGGGoat;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnHandlerPlayerWorldAreaEntered, AGGGoat*, Goat, FGameplayTag, NewArea);

