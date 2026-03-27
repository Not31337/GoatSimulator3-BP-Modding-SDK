#pragma once
#include "CoreMinimal.h"
#include "GGPIDState.generated.h"

USTRUCT(BlueprintType)
struct GOAT2_API FGGPIDState {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    double LastError;
    
    UPROPERTY(EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    double AccumulatedError;
    
    FGGPIDState();
};

