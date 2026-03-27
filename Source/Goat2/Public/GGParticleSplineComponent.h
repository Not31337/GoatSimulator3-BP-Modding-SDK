#pragma once
#include "CoreMinimal.h"
#include "Components/SplineComponent.h"
#include "EValidSectionType.h"
#include "ParticleSplineSection.h"
#include "WeightedElement_SplineSection.h"
#include "GGParticleSplineComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class GOAT2_API UGGParticleSplineComponent : public USplineComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EValidSectionType ValidSectionType;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FParticleSplineSection> ValidSplineSections;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FWeightedElement_SplineSection> WeightedSplineSections;
    
public:
    UGGParticleSplineComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsInputKeyValid(float InputKey) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsDistanceValid(float InDistance) const;
    
    UFUNCTION(BlueprintCallable)
    void ClearValidParticleRanges();
    
    UFUNCTION(BlueprintCallable)
    void AddNewValidParticleRange(float StartValue, float EndValue);
    
};

