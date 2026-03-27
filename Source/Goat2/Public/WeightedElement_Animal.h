#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "WeightedElement.h"
#include "WeightedElement_Animal.generated.h"

class AGGNPC_Animal;

USTRUCT(BlueprintType)
struct FWeightedElement_Animal : public FWeightedElement {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AGGNPC_Animal> AnimalClass;
    
    GOAT2_API FWeightedElement_Animal();
};

