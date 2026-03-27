#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "OnCannonFiredDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FOnCannonFired, FVector, StartLocation, FVector, EndLocation, bool, FinishedPlacement);

