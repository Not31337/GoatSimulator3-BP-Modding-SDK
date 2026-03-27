#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "GGFactChanged_CallbackDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_TwoParams(FGGFactChanged_Callback, const FGameplayTag&, InFact, float, InValue);

