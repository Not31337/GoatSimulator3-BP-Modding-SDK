#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "MenuNavigationContext.h"
#include "OnMenuExitedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnMenuExited, FGameplayTag, InTag, FMenuNavigationContext, Context);

