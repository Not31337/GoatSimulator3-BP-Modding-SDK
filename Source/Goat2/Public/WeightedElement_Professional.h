#pragma once
#include "CoreMinimal.h"
#include "EMoods.h"
#include "Templates/SubclassOf.h"
#include "WeightedElement.h"
#include "WeightedElement_Professional.generated.h"

class AGGNPC;

USTRUCT(BlueprintType)
struct FWeightedElement_Professional : public FWeightedElement {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AGGNPC> NPCClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EMoods StartMood;
    
    GOAT2_API FWeightedElement_Professional();
};

