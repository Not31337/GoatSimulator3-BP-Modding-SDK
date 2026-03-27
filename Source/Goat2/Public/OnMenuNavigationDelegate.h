#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "MenuNavigationContext.h"
#include "OnMenuNavigationDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnMenuNavigation, FGameplayTag, InMenuTag, FMenuNavigationContext, Context);

