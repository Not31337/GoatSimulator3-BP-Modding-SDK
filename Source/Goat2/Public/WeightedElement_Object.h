#pragma once
#include "CoreMinimal.h"
#include "WeightedElement.h"
#include "WeightedElement_Object.generated.h"

class UObject;

USTRUCT(BlueprintType)
struct GOAT2_API FWeightedElement_Object : public FWeightedElement {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UObject* Object;
    
    FWeightedElement_Object();
};

