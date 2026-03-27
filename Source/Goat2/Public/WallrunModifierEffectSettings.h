#pragma once
#include "CoreMinimal.h"
#include "WallrunModifierEffectSettings.generated.h"

class UParticleSystem;
class USoundBase;

USTRUCT(BlueprintType)
struct FWallrunModifierEffectSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* WallrunContinuousParticle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* WallrunImpactParticle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundBase* WallrunContinuousSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundBase* WallrunImpactSound;
    
    GOAT2_API FWallrunModifierEffectSettings();
};

