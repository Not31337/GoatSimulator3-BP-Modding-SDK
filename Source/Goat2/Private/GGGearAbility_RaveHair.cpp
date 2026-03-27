#include "GGGearAbility_RaveHair.h"

UGGGearAbility_RaveHair::UGGGearAbility_RaveHair() {
    this->ReplicationPolicy = EGameplayAbilityReplicationPolicy::ReplicateYes;
    this->InstancingPolicy = EGameplayAbilityInstancingPolicy::InstancedPerActor;
    this->NetExecutionPolicy = EGameplayAbilityNetExecutionPolicy::LocalOnly;
    this->ImpactParticle = NULL;
    this->ImpactSound = NULL;
    this->RandomOffsetDistance = 20.00f;
}

void UGGGearAbility_RaveHair::PlayHitEffectServer_Implementation(AGGGoat* Goat, AActor* HitActor) {
}
bool UGGGearAbility_RaveHair::PlayHitEffectServer_Validate(AGGGoat* Goat, AActor* HitActor) {
    return true;
}

void UGGGearAbility_RaveHair::PlayHitEffects(AGGGoat* Goat, AActor* HitActor) {
}

void UGGGearAbility_RaveHair::PlayHitEffectMultiCast_Implementation(AGGGoat* Goat, AActor* HitActor) {
}


