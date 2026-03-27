#pragma once
#include "CoreMinimal.h"
#include "OnKarmaSentFromClientDelegate.generated.h"

class AGGPlayerController;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnKarmaSentFromClient, AGGPlayerController*, PC, int32, KarmaAmount);

