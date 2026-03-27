#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "OnEffectSourceChangedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnEffectSourceChanged, FGameplayTag, EffectTag, bool, IsAdded);

