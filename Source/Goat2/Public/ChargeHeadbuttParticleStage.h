#pragma once
#include "CoreMinimal.h"
#include "ChargeHeadbuttParticleStage.generated.h"

class UParticleSystem;

USTRUCT(BlueprintType)
struct FChargeHeadbuttParticleStage {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* ChargeParticle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* ReleaseParticle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Threshold;
    
    GOAT2_API FChargeHeadbuttParticleStage();
};

