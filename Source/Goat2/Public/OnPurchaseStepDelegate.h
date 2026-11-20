#pragma once
#include "CoreMinimal.h"
#include "OnPurchaseStepDelegate.generated.h"

class AGGGoat;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnPurchaseStep, AGGGoat*, Goat);

