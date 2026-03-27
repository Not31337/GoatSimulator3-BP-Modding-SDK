#pragma once
#include "CoreMinimal.h"
#include "OnObjectControlEndedDelegate.generated.h"

class UObject;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnObjectControlEnded, UObject*, ControlledObject);

