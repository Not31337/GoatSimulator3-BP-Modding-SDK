#pragma once
#include "CoreMinimal.h"
#include "WeightedElement.h"
#include "ECactusTypeVariants.h"
#include "WeightedElement_CactusType.generated.h"

USTRUCT(BlueprintType)
struct GOATAPOCALYPSE_API FWeightedElement_CactusType : public FWeightedElement {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECactusTypeVariants Type;
    
    FWeightedElement_CactusType();
};

