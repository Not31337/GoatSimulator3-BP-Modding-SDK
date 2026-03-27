#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "OnCategoryChanged_DelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnCategoryChanged_Delegate, FGameplayTag, Category);

