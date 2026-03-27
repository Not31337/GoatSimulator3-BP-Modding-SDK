#pragma once
#include "CoreMinimal.h"
#include "GGMeshCompWithMaterial.generated.h"

class UMaterialInterface;
class UStaticMeshComponent;

USTRUCT(BlueprintType)
struct GOATAPOCALYPSE_API FGGMeshCompWithMaterial {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* Mesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInterface* DefaultMaterial;
    
    FGGMeshCompWithMaterial();
};

