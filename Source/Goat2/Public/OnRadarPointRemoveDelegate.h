#pragma once
#include "CoreMinimal.h"
#include "RadarCoordinateData.h"
#include "OnRadarPointRemoveDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnRadarPointRemove, FRadarCoordinateData, Data);

