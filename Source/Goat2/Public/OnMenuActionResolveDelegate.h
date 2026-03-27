#pragma once
#include "CoreMinimal.h"
#include "MenuNavigationContextContainer.h"
#include "OnMenuActionResolveDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnMenuActionResolve, FMenuNavigationContextContainer, Context);

