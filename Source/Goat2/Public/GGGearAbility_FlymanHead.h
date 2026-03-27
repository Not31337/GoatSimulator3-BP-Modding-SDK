#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GGGearAbility.h"
#include "GGGearAbility_FlymanHead.generated.h"

class AActor;
class AGGGoat;
class UParticleSystem;
class USoundBase;

UCLASS(Blueprintable)
class GOAT2_API UGGGearAbility_FlymanHead : public UGGGearAbility {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* ParticleSystem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundBase* ImpactSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bPlayEffectsAttached;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector Offset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RandomOffsetDistance;
    
public:
    UGGGearAbility_FlymanHead();

private:
    UFUNCTION(BlueprintCallable, Server, Unreliable, WithValidation)
    void PlayHitEffectServer(AGGGoat* Goat, AActor* HitActor);
    
    UFUNCTION(BlueprintCallable)
    void PlayHitEffects(AGGGoat* Goat, AActor* HitActor);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Unreliable)
    void PlayHitEffectMultiCast(AGGGoat* Goat, AActor* HitActor);
    
};

