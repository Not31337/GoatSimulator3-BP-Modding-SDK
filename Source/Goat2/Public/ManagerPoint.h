#pragma once
#include "CoreMinimal.h"
#include "SplinePointIdentifier.h"
#include "ManagerPoint.generated.h"

USTRUCT(BlueprintType)
struct FManagerPoint {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsFirstElement;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsLastElement;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSplinePointIdentifier SelfPoint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSplinePointIdentifier PreviousPoint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSplinePointIdentifier NextPoint;
    
    GOAT2_API FManagerPoint();
};

