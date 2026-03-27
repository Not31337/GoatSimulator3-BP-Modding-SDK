#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "GGGearAbility.h"
#include "Templates/SubclassOf.h"
#include "GGGearAbility_CappyHat.generated.h"

class AActor;
class AGGCappyHat_GearProjectile;
class AGGPhysicsProjectile;

UCLASS(Blueprintable)
class GOATMULTIVERSE_API UGGGearAbility_CappyHat : public UGGGearAbility {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AimPitchOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AGGCappyHat_GearProjectile> ProjectileClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ForwardSpawnOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag HatThrowRumble;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag HatReturnedRumble;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AGGCappyHat_GearProjectile* ActiveProjectile;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag EffectSourceTag;
    
public:
    UGGGearAbility_CappyHat();

protected:
    UFUNCTION(BlueprintCallable)
    void OnProjectileDestroyed(AActor* Projectile);
    
    UFUNCTION(BlueprintCallable)
    void CappyHatHitSpecialTarget(AGGPhysicsProjectile* Projectile, AActor* HitActor);
    
};

