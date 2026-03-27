#include "GGGearAbility_BugsBunny.h"

UGGGearAbility_BugsBunny::UGGGearAbility_BugsBunny() {
    this->ReplicationPolicy = EGameplayAbilityReplicationPolicy::ReplicateYes;
    this->InstancingPolicy = EGameplayAbilityInstancingPolicy::InstancedPerActor;
    this->NetExecutionPolicy = EGameplayAbilityNetExecutionPolicy::LocalOnly;
    this->ImpactParticle = NULL;
    this->ImpactSound = NULL;
    this->glitchMaterial = NULL;
    this->RandomOffsetDistance = 20.00f;
}

void UGGGearAbility_BugsBunny::PlayHitEffectServer_Implementation(AGGGoat* Goat, AActor* HitActor) {
}
bool UGGGearAbility_BugsBunny::PlayHitEffectServer_Validate(AGGGoat* Goat, AActor* HitActor) {
    return true;
}

void UGGGearAbility_BugsBunny::PlayHitEffects(AGGGoat* Goat, AActor* HitActor) {
}

void UGGGearAbility_BugsBunny::PlayHitEffectMultiCast_Implementation(AGGGoat* Goat, AActor* HitActor) {
}


