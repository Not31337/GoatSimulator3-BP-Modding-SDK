#pragma once
#include "CoreMinimal.h"
#include "LayerCurves.h"
#include "BasePoseAdditiveAlphaCurves.generated.h"

USTRUCT(BlueprintType)
struct FBasePoseAdditiveAlphaCurves : public FLayerCurves {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName CurveLayeringArmLeft_LS;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName CurveLayeringArmRight_LS;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName CurveLayeringHandLeft;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName CurveLayeringHandRight;
    
    GOAT2_API FBasePoseAdditiveAlphaCurves();
};

