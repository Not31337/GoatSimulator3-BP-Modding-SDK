#pragma once
#include "CoreMinimal.h"
#include "EMoods.h"
#include "WeightedElement.h"
#include "WeightedElement_Mood.generated.h"

USTRUCT(BlueprintType)
struct FWeightedElement_Mood : public FWeightedElement {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EMoods Mood;
    
    GOAT2_API FWeightedElement_Mood();
};

