#pragma once
#include "CoreMinimal.h"
#include "WeightedElement.h"
#include "WeightedElement_Test.generated.h"

USTRUCT(BlueprintType)
struct FWeightedElement_Test : public FWeightedElement {
    GENERATED_BODY()
public:
    GOAT2_API FWeightedElement_Test();
};

