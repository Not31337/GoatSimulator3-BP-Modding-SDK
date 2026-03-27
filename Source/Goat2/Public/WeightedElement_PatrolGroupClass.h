#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "WeightedElement.h"
#include "WeightedElement_PatrolGroupClass.generated.h"

class AGGNPCPatrolGroup;

USTRUCT(BlueprintType)
struct GOAT2_API FWeightedElement_PatrolGroupClass : public FWeightedElement {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AGGNPCPatrolGroup> PatrolGroupClass;
    
    FWeightedElement_PatrolGroupClass();
};

