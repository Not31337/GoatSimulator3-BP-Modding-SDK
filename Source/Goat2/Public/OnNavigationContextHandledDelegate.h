#pragma once
#include "CoreMinimal.h"
#include "MenuNavigationContextContainer.h"
#include "OnNavigationContextHandledDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnNavigationContextHandled, FMenuNavigationContextContainer, ContextContainer);

