#include "GGGearAbility_CappyHat.h"

UGGGearAbility_CappyHat::UGGGearAbility_CappyHat() {
    this->ReplicationPolicy = EGameplayAbilityReplicationPolicy::ReplicateYes;
    this->InstancingPolicy = EGameplayAbilityInstancingPolicy::InstancedPerActor;
    this->AimPitchOffset = 20.00f;
    this->ProjectileClass = NULL;
    this->ForwardSpawnOffset = 0.00f;
    this->ActiveProjectile = NULL;
}

void UGGGearAbility_CappyHat::OnProjectileDestroyed(AActor* Projectile) {
}

void UGGGearAbility_CappyHat::CappyHatHitSpecialTarget(AGGPhysicsProjectile* Projectile, AActor* HitActor) {
}


