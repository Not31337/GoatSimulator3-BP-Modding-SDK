#include "GGGearAbility_FlymanHead.h"

UGGGearAbility_FlymanHead::UGGGearAbility_FlymanHead() {
    this->ReplicationPolicy = EGameplayAbilityReplicationPolicy::ReplicateYes;
    this->InstancingPolicy = EGameplayAbilityInstancingPolicy::InstancedPerActor;
    this->NetExecutionPolicy = EGameplayAbilityNetExecutionPolicy::LocalOnly;
    this->ParticleSystem = NULL;
    this->ImpactSound = NULL;
    this->bPlayEffectsAttached = true;
    this->RandomOffsetDistance = 0.00f;
}

void UGGGearAbility_FlymanHead::PlayHitEffectServer_Implementation(AGGGoat* Goat, AActor* HitActor) {
}
bool UGGGearAbility_FlymanHead::PlayHitEffectServer_Validate(AGGGoat* Goat, AActor* HitActor) {
    return true;
}

void UGGGearAbility_FlymanHead::PlayHitEffects(AGGGoat* Goat, AActor* HitActor) {
}

void UGGGearAbility_FlymanHead::PlayHitEffectMultiCast_Implementation(AGGGoat* Goat, AActor* HitActor) {
}


