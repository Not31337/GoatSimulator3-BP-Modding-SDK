#pragma once
#include "CoreMinimal.h"
#include "WeightedElement.h"
#include "WeightedElement_AnimMontage.generated.h"

class UAnimMontage;

USTRUCT(BlueprintType)
struct GOAT2_API FWeightedElement_AnimMontage : public FWeightedElement {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* Animation;
    
    FWeightedElement_AnimMontage();
};

