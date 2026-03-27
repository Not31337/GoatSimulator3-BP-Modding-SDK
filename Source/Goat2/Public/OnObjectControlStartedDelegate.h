#pragma once
#include "CoreMinimal.h"
#include "OnObjectControlStartedDelegate.generated.h"

class UObject;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnObjectControlStarted, UObject*, ControlledObject);

