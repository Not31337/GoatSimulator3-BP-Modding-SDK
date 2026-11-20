#pragma once
#include "CoreMinimal.h"
#include "GameNightAxisInput.generated.h"

USTRUCT(BlueprintType)
struct FGameNightAxisInput {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float X;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Y;
    
    ONLINESUBSYSTEMGAMENIGHT_API FGameNightAxisInput();
};

