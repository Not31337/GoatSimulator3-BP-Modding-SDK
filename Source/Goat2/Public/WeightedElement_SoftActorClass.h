#pragma once
#include "CoreMinimal.h"
#include "WeightedElement.h"
#include "WeightedElement_SoftActorClass.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct GOAT2_API FWeightedElement_SoftActorClass : public FWeightedElement {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<AActor> ActorClass;
    
    FWeightedElement_SoftActorClass();
};

