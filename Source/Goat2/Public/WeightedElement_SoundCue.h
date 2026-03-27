#pragma once
#include "CoreMinimal.h"
#include "WeightedElement.h"
#include "WeightedElement_SoundCue.generated.h"

class USoundCue;

USTRUCT(BlueprintType)
struct GOAT2_API FWeightedElement_SoundCue : public FWeightedElement {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundCue* SoundCue;
    
    FWeightedElement_SoundCue();
};

