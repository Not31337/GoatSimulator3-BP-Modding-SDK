#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "GGStaticImpactEffectLoader.generated.h"

class UParticleSystem;
class USoundCue;

UCLASS(Blueprintable)
class GOAT2_API UGGStaticImpactEffectLoader : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UParticleSystem> CurrentlyLoadingParticle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<USoundCue> CurrentlyLoadingSound;
    
    UGGStaticImpactEffectLoader();

    UFUNCTION(BlueprintCallable)
    void LoadImpactEffects(TSoftObjectPtr<UParticleSystem> Particle, TSoftObjectPtr<USoundCue> Sound, FVector Location, FRotator Rotation);
    
    UFUNCTION(BlueprintCallable)
    void ImpactEffectsLoaded();
    
};

