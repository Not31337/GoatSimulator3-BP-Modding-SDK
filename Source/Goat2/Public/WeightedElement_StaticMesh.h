#pragma once
#include "CoreMinimal.h"
#include "WeightedElement.h"
#include "WeightedElement_StaticMesh.generated.h"

class UStaticMesh;

USTRUCT(BlueprintType)
struct GOAT2_API FWeightedElement_StaticMesh : public FWeightedElement {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UStaticMesh* StaticMesh;
    
    FWeightedElement_StaticMesh();
};

