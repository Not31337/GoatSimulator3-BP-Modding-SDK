#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Curves/CurveFloat.h"
#include "GGGoatGear_Static_Base.h"
#include "GGGoatGear_Static_PurityRing.generated.h"

class UPrimitiveComponent;
class USceneComponent;

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class GOAT2_API UGGGoatGear_Static_PurityRing : public UGGGoatGear_Static_Base {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRuntimeFloatCurve AnimationCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_IsInvisibleEffectActive, meta=(AllowPrivateAccess=true))
    bool bIsInvisibleEffectActive;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* TargetComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UPrimitiveComponent*> HiddenOwnerComponents;
    
public:
    UGGGoatGear_Static_PurityRing(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable)
    void OnRep_IsInvisibleEffectActive();
    
    UFUNCTION(BlueprintCallable)
    void AnimateRing(USceneComponent* Target, FVector TargetLocation, FRotator TargetRotation, FVector StartLocation, FRotator StartRotation, float AnimationTime);
    
};

