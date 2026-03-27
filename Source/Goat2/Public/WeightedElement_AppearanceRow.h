#pragma once
#include "CoreMinimal.h"
#include "WeightedElement.h"
#include "WeightedElement_AppearanceRow.generated.h"

USTRUCT(BlueprintType)
struct FWeightedElement_AppearanceRow : public FWeightedElement {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName RowName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAlwaysPick;
    
    GOAT2_API FWeightedElement_AppearanceRow();
};

