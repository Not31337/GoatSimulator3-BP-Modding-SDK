#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GoatKartCircuitResult.generated.h"

class UGGRoadSplineComponent;

USTRUCT(BlueprintType)
struct GOAT2_API FGoatKartCircuitResult {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector WorldLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UGGRoadSplineComponent* Spline;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SplinePoint;
    
    FGoatKartCircuitResult();
};

