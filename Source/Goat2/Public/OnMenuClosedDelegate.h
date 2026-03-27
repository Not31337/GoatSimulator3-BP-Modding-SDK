#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "MenuNavigationContext.h"
#include "OnMenuClosedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnMenuClosed, FGameplayTag, InMenuTag, FMenuNavigationContext, Context);

