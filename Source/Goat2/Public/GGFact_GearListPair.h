#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "GGFact_GearListPair.generated.h"

class UGGGoatGearList;

USTRUCT(BlueprintType)
struct GOAT2_API FGGFact_GearListPair {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag Fact;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UGGGoatGearList* GearList;
    
    FGGFact_GearListPair();
};

