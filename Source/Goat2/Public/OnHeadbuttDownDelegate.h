#pragma once
#include "CoreMinimal.h"
#include "OnHeadbuttDownDelegate.generated.h"

class AGGPlayerController;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnHeadbuttDown, AGGPlayerController*, PlayerController);

