#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "OnExitPlayerWorldAreaDelegate.generated.h"

class AGGGoat;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnExitPlayerWorldArea, AGGGoat*, Goat, FGameplayTag, LeftArea);

