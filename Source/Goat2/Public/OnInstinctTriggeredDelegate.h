#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "OnInstinctTriggeredDelegate.generated.h"

class AGGGoat;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnInstinctTriggered, AGGGoat*, Goat, FGameplayTag, InstinctTag);

