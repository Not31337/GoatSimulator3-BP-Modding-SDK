#pragma once
#include "CoreMinimal.h"
#include "SoftMatElement.h"
#include "WeightedElement.h"
#include "AnimalMaterialCollection.generated.h"

USTRUCT(BlueprintType)
struct FAnimalMaterialCollection : public FWeightedElement {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSoftMatElement> MatElements;
    
    GOAT2_API FAnimalMaterialCollection();
};

