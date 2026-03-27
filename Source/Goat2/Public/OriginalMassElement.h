#pragma once
#include "CoreMinimal.h"
#include "OriginalMassElement.generated.h"

USTRUCT(BlueprintType)
struct FOriginalMassElement {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float OriginalDensity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float OriginalMass;
    
    GOAT2_API FOriginalMassElement();
};

