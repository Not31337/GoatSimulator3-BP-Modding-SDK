#pragma once
#include "CoreMinimal.h"
#include "MatElement.h"
#include "MeshDefaultMaterials.generated.h"

class UMeshComponent;

USTRUCT(BlueprintType)
struct FMeshDefaultMaterials {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMeshComponent* Mesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMatElement> DefaultMaterials;
    
    GOAT2_API FMeshDefaultMaterials();
};

