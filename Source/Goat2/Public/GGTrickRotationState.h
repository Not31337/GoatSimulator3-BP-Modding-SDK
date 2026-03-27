#pragma once
#include "CoreMinimal.h"
#include "GGTrickRotationState.generated.h"

USTRUCT(BlueprintType)
struct GOAT2_API FGGTrickRotationState {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsDoingTricks;
    
    FGGTrickRotationState();
};

