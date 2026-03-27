#pragma once
#include "CoreMinimal.h"
#include "OriginalSkelMassElement.generated.h"

USTRUCT(BlueprintType)
struct FOriginalSkelMassElement {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float OriginalDensity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float OriginalMass;
    
    GOAT2_API FOriginalSkelMassElement();
};

