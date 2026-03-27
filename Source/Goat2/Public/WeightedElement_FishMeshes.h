#pragma once
#include "CoreMinimal.h"
#include "WeightedElement.h"
#include "WeightedElement_FishMeshes.generated.h"

class UStaticMesh;

USTRUCT(BlueprintType)
struct FWeightedElement_FishMeshes : public FWeightedElement {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UStaticMesh* Mesh;
    
    GOAT2_API FWeightedElement_FishMeshes();
};

