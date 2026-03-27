#pragma once
#include "CoreMinimal.h"
#include "CustomPrimitiveDataParameters.h"
#include "PerMaterialCustomPrimitiveData.generated.h"

class UMaterial;

USTRUCT(BlueprintType)
struct FPerMaterialCustomPrimitiveData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterial* Material;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString MaterialName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCustomPrimitiveDataParameters CustomPrimitiveDataParameters;
    
    GOAT2_API FPerMaterialCustomPrimitiveData();
};

