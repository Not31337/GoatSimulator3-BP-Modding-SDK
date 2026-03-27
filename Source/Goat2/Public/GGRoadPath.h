#pragma once
#include "CoreMinimal.h"
#include "GoatKartCircuitResult.h"
#include "GGRoadPath.generated.h"

USTRUCT(BlueprintType)
struct GOAT2_API FGGRoadPath {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FGoatKartCircuitResult> Points;
    
    FGGRoadPath();
};

