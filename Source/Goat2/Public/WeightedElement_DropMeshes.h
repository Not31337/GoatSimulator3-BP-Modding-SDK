#pragma once
#include "CoreMinimal.h"
#include "WeightedElement.h"
#include "WeightedElement_DropMeshes.generated.h"

class UStaticMesh;

USTRUCT(BlueprintType)
struct FWeightedElement_DropMeshes : public FWeightedElement {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UStaticMesh* Mesh;
    
    GOAT2_API FWeightedElement_DropMeshes();
};

