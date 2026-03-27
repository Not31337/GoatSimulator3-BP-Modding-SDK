#include "GGGearAbility_HumanAltGoat.h"

UGGGearAbility_HumanAltGoat::UGGGearAbility_HumanAltGoat() {
    this->bReplicateInputDirectly = true;
    this->ReplicationPolicy = EGameplayAbilityReplicationPolicy::ReplicateYes;
    this->InstancingPolicy = EGameplayAbilityInstancingPolicy::InstancedPerActor;
    this->bUseNonRandomlySelectables = false;
    this->ChargeTime = 1.00f;
    this->MaleAppearanceChance = 0.50f;
    this->HairMeshIndex = 2;
    this->UpperBodyMeshIndex = 0;
    this->LowerBodyMeshIndex = 1;
}


