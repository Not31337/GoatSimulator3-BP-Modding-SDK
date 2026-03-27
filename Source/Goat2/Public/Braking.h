#pragma once
#include "CoreMinimal.h"
#include "Braking.generated.h"

USTRUCT(BlueprintType)
struct FBraking {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsBraking;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float StartBrakingSpeed;
    
    GOAT2_API FBraking();
};

