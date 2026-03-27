#include "GGGearAbility_Megaphone.h"

UGGGearAbility_Megaphone::UGGGearAbility_Megaphone() {
    this->bReplicateInputDirectly = true;
    this->ReplicationPolicy = EGameplayAbilityReplicationPolicy::ReplicateYes;
    this->InstancingPolicy = EGameplayAbilityInstancingPolicy::InstancedPerActor;
    this->NetExecutionPolicy = EGameplayAbilityNetExecutionPolicy::ServerOnly;
    this->MegaphoneBaaSound = NULL;
    this->ForceActorClass = NULL;
}

void UGGGearAbility_Megaphone::PlayMegaphoneEffectServer_Implementation(AGGGoat* Goat) {
}
bool UGGGearAbility_Megaphone::PlayMegaphoneEffectServer_Validate(AGGGoat* Goat) {
    return true;
}

void UGGGearAbility_Megaphone::PlayMegaphoneEffects(AGGGoat* Goat) {
}

void UGGGearAbility_Megaphone::PlayAbility(AGGGoat* Goat) {
}

void UGGGearAbility_Megaphone::MulticastCreateForceActor_Implementation(AGGGoat* Goat) {
}


