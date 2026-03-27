#pragma once
#include "CoreMinimal.h"
#include "RadarCoordinateData.h"
#include "OnRadarPointUpdateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnRadarPointUpdate, FRadarCoordinateData, Data);

