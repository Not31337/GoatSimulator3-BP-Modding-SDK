#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GGPActorMesh.generated.h"

class UStaticMesh;

USTRUCT(BlueprintType)
struct GOATAPOCALYPSE_API FGGPActorMesh {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UStaticMesh* Mesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector PActorMeshScale;
    
    FGGPActorMesh();
};

