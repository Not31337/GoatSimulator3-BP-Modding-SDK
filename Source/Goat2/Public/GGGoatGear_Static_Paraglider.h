#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Curves/CurveFloat.h"
#include "GGGoatGear_Static_Base.h"
#include "GGGoatGear_Static_Paraglider.generated.h"

class USceneComponent;

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class GOAT2_API UGGGoatGear_Static_Paraglider : public UGGGoatGear_Static_Base {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRuntimeFloatCurve ScaleCurve;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* TargetComponent;
    
public:
    UGGGoatGear_Static_Paraglider(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void AnimateParaglider(USceneComponent* Target, FVector TargetScale, FVector StartScale, float AnimationTime);
    
};

