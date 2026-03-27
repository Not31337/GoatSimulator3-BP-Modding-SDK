#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "WeightedElement.h"
#include "WeightedElement_ActorClass.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct GOAT2_API FWeightedElement_ActorClass : public FWeightedElement {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AActor> ActorClass;
    
    FWeightedElement_ActorClass();
};

