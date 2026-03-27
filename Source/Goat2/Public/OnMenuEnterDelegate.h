#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "OnMenuEnterDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnMenuEnter, FGameplayTag, InMenuTag);

