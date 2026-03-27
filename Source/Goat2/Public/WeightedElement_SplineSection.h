#pragma once
#include "CoreMinimal.h"
#include "WeightedElement.h"
#include "WeightedElement_SplineSection.generated.h"

USTRUCT(BlueprintType)
struct FWeightedElement_SplineSection : public FWeightedElement {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ArrayIndex;
    
    GOAT2_API FWeightedElement_SplineSection();
};

