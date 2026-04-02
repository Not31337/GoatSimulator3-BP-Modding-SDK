#pragma once
#include "CoreMinimal.h"
#include "OnLickDownDelegate.generated.h"

class AGGPlayerController;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnLickDown, AGGPlayerController*, PlayerController);

