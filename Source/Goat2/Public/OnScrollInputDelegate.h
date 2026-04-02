#pragma once
#include "CoreMinimal.h"
#include "OnScrollInputDelegate.generated.h"

class AGGPlayerController;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnScrollInput, AGGPlayerController*, PlayerController, bool, bUp);

