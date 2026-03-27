#pragma once
#include "CoreMinimal.h"
#include "OnGrindStartDelegate.generated.h"

class UGGGrindableSplineComponent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnGrindStart, UGGGrindableSplineComponent*, GrindSpline);

