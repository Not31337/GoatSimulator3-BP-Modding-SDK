#pragma once
#include "CoreMinimal.h"
#include "OnGrindHyperspeedEndDelegate.generated.h"

class UGGGrindableSplineComponent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnGrindHyperspeedEnd, UGGGrindableSplineComponent*, GrindSpline);

