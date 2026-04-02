#pragma once
#include "CoreMinimal.h"
#include "OnBaaDownDelegate.generated.h"

class AGGPlayerController;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnBaaDown, AGGPlayerController*, PlayerController);

