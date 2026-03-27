#pragma once
#include "CoreMinimal.h"
#include "GGFadeOutMesh.generated.h"

class UMaterialInstanceDynamic;
class UStaticMeshComponent;

USTRUCT(BlueprintType)
struct GOATAPOCALYPSE_API FGGFadeOutMesh {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UStaticMeshComponent*> HighlightMeshes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInstanceDynamic* MaterialInstance;
    
    FGGFadeOutMesh();
};

