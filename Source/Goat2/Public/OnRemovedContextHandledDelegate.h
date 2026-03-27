#pragma once
#include "CoreMinimal.h"
#include "MenuNavigationContextContainer.h"
#include "OnRemovedContextHandledDelegate.generated.h"

class AGGPlayerController;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnRemovedContextHandled, FMenuNavigationContextContainer, ContextContainer, AGGPlayerController*, PC);

