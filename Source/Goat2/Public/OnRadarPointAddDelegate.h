#pragma once
#include "CoreMinimal.h"
#include "RadarCoordinateData.h"
#include "OnRadarPointAddDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnRadarPointAdd, FRadarCoordinateData, Data);

