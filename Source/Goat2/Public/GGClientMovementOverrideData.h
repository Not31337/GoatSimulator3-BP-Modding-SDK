#pragma once
#include "CoreMinimal.h"
#include "GGClientMovementOverrideData.generated.h"

class AGGCharacter;

USTRUCT(BlueprintType)
struct GOAT2_API FGGClientMovementOverrideData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Duration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BlendOutTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AGGCharacter* ControllingCharacter;
    
    FGGClientMovementOverrideData();
};

