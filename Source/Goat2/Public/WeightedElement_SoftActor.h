#pragma once
#include "CoreMinimal.h"
#include "WeightedElement.h"
#include "WeightedElement_SoftActor.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct GOAT2_API FWeightedElement_SoftActor : public FWeightedElement {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<AActor> Actor;
    
    FWeightedElement_SoftActor();
};

