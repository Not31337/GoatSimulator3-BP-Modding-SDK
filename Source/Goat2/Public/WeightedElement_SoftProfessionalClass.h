#pragma once
#include "CoreMinimal.h"
#include "EMoods.h"
#include "WeightedElement.h"
#include "WeightedElement_SoftProfessionalClass.generated.h"

class AGGNPC;

USTRUCT(BlueprintType)
struct FWeightedElement_SoftProfessionalClass : public FWeightedElement {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<AGGNPC> NPCClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EMoods StartMood;
    
    GOAT2_API FWeightedElement_SoftProfessionalClass();
};

