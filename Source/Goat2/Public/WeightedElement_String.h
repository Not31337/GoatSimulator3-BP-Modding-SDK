#pragma once
#include "CoreMinimal.h"
#include "WeightedElement.h"
#include "WeightedElement_String.generated.h"

USTRUCT(BlueprintType)
struct GOAT2_API FWeightedElement_String : public FWeightedElement {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString StringValue;
    
    FWeightedElement_String();
};

