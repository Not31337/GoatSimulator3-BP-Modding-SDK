#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "WeightedElement.h"
#include "WeightedElement_GameplayTag.generated.h"

USTRUCT(BlueprintType)
struct GOAT2_API FWeightedElement_GameplayTag : public FWeightedElement {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag Tag;
    
    FWeightedElement_GameplayTag();
};

