#pragma once
#include "CoreMinimal.h"
#include "OnInteractDownDelegate.generated.h"

class AGGPlayerController;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnInteractDown, AGGPlayerController*, PlayerController);

