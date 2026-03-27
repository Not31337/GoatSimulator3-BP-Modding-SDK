#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "MenuNavigationContext.h"
#include "OnMenuAboutToBeOpenedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnMenuAboutToBeOpened, FGameplayTag, InMenuTag, FMenuNavigationContext, Context);

