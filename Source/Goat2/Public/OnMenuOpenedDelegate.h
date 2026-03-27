#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "MenuNavigationContext.h"
#include "OnMenuOpenedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnMenuOpened, FGameplayTag, InMenuTag, FMenuNavigationContext, Context);

