#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "HandIKValue.generated.h"

USTRUCT(BlueprintType)
struct GOAT2_API FHandIKValue {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector HandIKBoneLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HandIKAlpha;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TransformHandIKAlpha;
    
    FHandIKValue();
};

