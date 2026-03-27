#pragma once
#include "CoreMinimal.h"
#include "WeightedElement.generated.h"

USTRUCT(BlueprintType)
struct GOAT2_API FWeightedElement {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Weight;
    
    FWeightedElement();
};

