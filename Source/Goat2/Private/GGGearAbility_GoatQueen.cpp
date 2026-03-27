#include "GGGearAbility_GoatQueen.h"

UGGGearAbility_GoatQueen::UGGGearAbility_GoatQueen() {
    this->InstancingPolicy = EGameplayAbilityInstancingPolicy::InstancedPerActor;
    this->GoatGuardClass = NULL;
    this->MaxGuardsSpawned = 30.00f;
    this->GuardDespawnSound = NULL;
    this->GuardDespawnParticle = NULL;
    this->bPoolNPCsWhenUnequipped = true;
}



