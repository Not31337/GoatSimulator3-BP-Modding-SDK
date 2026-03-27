#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "WeightedElement.h"
#include "PrioritizedArea.generated.h"

USTRUCT(BlueprintType)
struct FPrioritizedArea : public FWeightedElement {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag AreaTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAlwaysPick;
    
    GOAT2_API FPrioritizedArea();
};

