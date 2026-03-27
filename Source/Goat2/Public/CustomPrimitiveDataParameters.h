#pragma once
#include "CoreMinimal.h"
#include "CustomPrimitiveDataColorProperty.h"
#include "CustomPrimitiveDataScalarProperty.h"
#include "CustomPrimitiveDataVectorProperty.h"
#include "CustomPrimitiveDataParameters.generated.h"

USTRUCT(BlueprintType)
struct FCustomPrimitiveDataParameters {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FCustomPrimitiveDataScalarProperty> ScalarParameters;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FCustomPrimitiveDataVectorProperty> VectorParameters;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FCustomPrimitiveDataColorProperty> ColorParameters;
    
    GOAT2_API FCustomPrimitiveDataParameters();
};

