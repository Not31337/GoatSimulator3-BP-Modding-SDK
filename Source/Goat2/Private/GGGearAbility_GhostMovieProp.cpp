#include "GGGearAbility_GhostMovieProp.h"

UGGGearAbility_GhostMovieProp::UGGGearAbility_GhostMovieProp() {
    this->bReplicateInputDirectly = true;
    this->ReplicationPolicy = EGameplayAbilityReplicationPolicy::ReplicateYes;
    this->InstancingPolicy = EGameplayAbilityInstancingPolicy::InstancedPerActor;
    this->CooldownTime = 1.00f;
    this->GhostType = NULL;
    this->ActivationParticle = NULL;
    this->ActivationSound = NULL;
    this->GhostMoviePropMesh = NULL;
}

void UGGGearAbility_GhostMovieProp::MulticastActivationEffects_Implementation() {
}

bool UGGGearAbility_GhostMovieProp::GhostUnpossessedNpc(AGGGhost* Ghost) {
    return false;
}

void UGGGearAbility_GhostMovieProp::GhostPossessedAnNpc(AGGGhost* Ghost) {
}


