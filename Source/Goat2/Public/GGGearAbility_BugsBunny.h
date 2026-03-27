#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GGGearAbility.h"
#include "GGGearAbility_BugsBunny.generated.h"

class AActor;
class AGGGoat;
class UMaterialInterface;
class UParticleSystem;
class USoundBase;

UCLASS(Blueprintable)
class GOAT2_API UGGGearAbility_BugsBunny : public UGGGearAbility {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* ImpactParticle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundBase* ImpactSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInterface* glitchMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector EffectLocationOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RandomOffsetDistance;
    
public:
    UGGGearAbility_BugsBunny();

private:
    UFUNCTION(BlueprintCallable, Server, Unreliable, WithValidation)
    void PlayHitEffectServer(AGGGoat* Goat, AActor* HitActor);
    
    UFUNCTION(BlueprintCallable)
    void PlayHitEffects(AGGGoat* Goat, AActor* HitActor);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Unreliable)
    void PlayHitEffectMultiCast(AGGGoat* Goat, AActor* HitActor);
    
};

