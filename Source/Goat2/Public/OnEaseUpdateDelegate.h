#pragma once
#include "CoreMinimal.h"
#include "OnEaseUpdateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnEaseUpdate, float, Alpha);

