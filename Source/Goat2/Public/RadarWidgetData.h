#pragma once
#include "CoreMinimal.h"
#include "RadarCoordinateData.h"
#include "RadarWidgetData.generated.h"

class UGGRadarPointUserWidgetBase;

USTRUCT(BlueprintType)
struct GOAT2_API FRadarWidgetData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRadarCoordinateData Data;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UGGRadarPointUserWidgetBase* Widget;
    
    FRadarWidgetData();
};

