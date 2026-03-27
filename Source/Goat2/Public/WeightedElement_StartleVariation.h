#pragma once
#include "CoreMinimal.h"
#include "EStartleVariations.h"
#include "WeightedElement.h"
#include "WeightedElement_StartleVariation.generated.h"

USTRUCT(BlueprintType)
struct FWeightedElement_StartleVariation : public FWeightedElement {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EStartleVariations Variation;
    
    GOAT2_API FWeightedElement_StartleVariation();
};

