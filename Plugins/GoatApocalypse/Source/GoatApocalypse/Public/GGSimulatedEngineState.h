#pragma once
#include "CoreMinimal.h"
#include "GGSimulatedEngineState.generated.h"

USTRUCT(BlueprintType)
struct GOATAPOCALYPSE_API FGGSimulatedEngineState {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsEngineOn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TargetThrottle;
    
    FGGSimulatedEngineState();
};

