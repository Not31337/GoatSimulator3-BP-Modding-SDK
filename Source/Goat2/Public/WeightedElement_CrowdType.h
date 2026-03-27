#pragma once
#include "CoreMinimal.h"
#include "ECrowdTypes.h"
#include "WeightedElement.h"
#include "WeightedElement_CrowdType.generated.h"

USTRUCT(BlueprintType)
struct FWeightedElement_CrowdType : public FWeightedElement {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECrowdTypes Type;
    
    GOAT2_API FWeightedElement_CrowdType();
};

