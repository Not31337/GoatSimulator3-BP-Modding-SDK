#pragma once
#include "CoreMinimal.h"
#include "GoatRagdollImpactParticles.generated.h"

class UParticleSystem;

USTRUCT(BlueprintType)
struct FGoatRagdollImpactParticles {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ImpulseThreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* ParticleSystem;
    
    GOAT2_API FGoatRagdollImpactParticles();
};

