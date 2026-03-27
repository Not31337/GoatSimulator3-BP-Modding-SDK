#pragma once
#include "CoreMinimal.h"
#include "OnGrindHyperspeedStartDelegate.generated.h"

class UGGGrindableSplineComponent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnGrindHyperspeedStart, UGGGrindableSplineComponent*, GrindSpline);

