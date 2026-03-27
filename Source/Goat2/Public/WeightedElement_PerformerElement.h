#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "WeightedElement.h"
#include "WeightedElement_PerformerElement.generated.h"

class AGGNPC;
class UBehaviorTree;
class UEnvQuery;

USTRUCT(BlueprintType)
struct FWeightedElement_PerformerElement : public FWeightedElement {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AGGNPC> StreetPerformerClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SphereRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AttractChance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UEnvQuery* StandLocationQuery;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBehaviorTree* OverridePerformBT;
    
    GOAT2_API FWeightedElement_PerformerElement();
};

