#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "OnEnterPlayerWorldAreaDelegate.generated.h"

class AGGGoat;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnEnterPlayerWorldArea, AGGGoat*, Goat, FGameplayTag, NewArea);

