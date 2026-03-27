#pragma once
#include "CoreMinimal.h"
#include "ELoadingScreenType.h"
#include "ERemovalReason.h"
#include "OnLoadingScreenRemovedDelegate.generated.h"

class AGGPlayerController;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FOnLoadingScreenRemoved, AGGPlayerController*, Controller, ELoadingScreenType, Type, ERemovalReason, RemovalReason);

