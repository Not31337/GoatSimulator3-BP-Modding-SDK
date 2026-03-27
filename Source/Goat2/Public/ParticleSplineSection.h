#pragma once
#include "CoreMinimal.h"
#include "ParticleSplineSection.generated.h"

USTRUCT(BlueprintType)
struct FParticleSplineSection {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float StartValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float EndValue;
    
    GOAT2_API FParticleSplineSection();
};

