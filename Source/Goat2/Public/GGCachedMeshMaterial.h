#pragma once
#include "CoreMinimal.h"
#include "GGCachedMeshMaterial.generated.h"

class UMaterialInterface;

USTRUCT(BlueprintType)
struct GOAT2_API FGGCachedMeshMaterial {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UMaterialInterface*> Materials;
    
    FGGCachedMeshMaterial();
};

