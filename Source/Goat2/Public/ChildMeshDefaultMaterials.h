#pragma once
#include "CoreMinimal.h"
#include "MatElement.h"
#include "ChildMeshDefaultMaterials.generated.h"

USTRUCT(BlueprintType)
struct FChildMeshDefaultMaterials {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMatElement> Materials;
    
    GOAT2_API FChildMeshDefaultMaterials();
};

