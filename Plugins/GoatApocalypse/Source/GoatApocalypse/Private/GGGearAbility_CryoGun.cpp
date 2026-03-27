#include "GGGearAbility_CryoGun.h"

UGGGearAbility_CryoGun::UGGGearAbility_CryoGun() {
    this->ReplicationPolicy = EGameplayAbilityReplicationPolicy::ReplicateYes;
    this->InstancingPolicy = EGameplayAbilityInstancingPolicy::InstancedPerActor;
    this->CryoGun = NULL;
}


