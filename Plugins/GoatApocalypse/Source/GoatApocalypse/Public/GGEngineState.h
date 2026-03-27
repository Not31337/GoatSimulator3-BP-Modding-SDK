#pragma once
#include "CoreMinimal.h"
#include "GGEngineState.generated.h"

USTRUCT(BlueprintType)
struct GOATAPOCALYPSE_API FGGEngineState {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CurrentThrottle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsEngineOn;
    
    FGGEngineState();
};

