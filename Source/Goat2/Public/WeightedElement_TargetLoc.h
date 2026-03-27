#pragma once
#include "CoreMinimal.h"
#include "WeightedElement.h"
#include "WeightedElement_TargetLoc.generated.h"

class AGGNPCTargetLocation;

USTRUCT(BlueprintType)
struct FWeightedElement_TargetLoc : public FWeightedElement {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AGGNPCTargetLocation* TargetLocation;
    
    GOAT2_API FWeightedElement_TargetLoc();
};

