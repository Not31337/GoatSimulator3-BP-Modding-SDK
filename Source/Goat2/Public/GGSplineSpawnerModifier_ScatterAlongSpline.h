#pragma once
#include "CoreMinimal.h"
#include "Curves/CurveFloat.h"
#include "GGSpawnerModifierInterface.h"
#include "GGSplineSpawnerModifier_ScatterAlongSpline.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class GOAT2_API UGGSplineSpawnerModifier_ScatterAlongSpline : public UGGSpawnerModifierInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRuntimeFloatCurve DistributionCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseDistributionCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NumDistributionAttempts;
    
public:
    UGGSplineSpawnerModifier_ScatterAlongSpline();

};

