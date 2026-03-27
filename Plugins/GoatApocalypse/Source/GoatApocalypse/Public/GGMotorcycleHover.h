#pragma once
#include "CoreMinimal.h"
#include "GGMotorcycleHover.generated.h"

class UAudioComponent;
class UParticleSystemComponent;

USTRUCT(BlueprintType)
struct GOATAPOCALYPSE_API FGGMotorcycleHover {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RemainingHover;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsHovering;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, NotReplicated, meta=(AllowPrivateAccess=true))
    TArray<UParticleSystemComponent*> ThrustParticles;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, NotReplicated, meta=(AllowPrivateAccess=true))
    UAudioComponent* ThrustSoundComponent;
    
    FGGMotorcycleHover();
};

