#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "OnMenuTabChangedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnMenuTabChanged, FGameplayTag, TabID);

