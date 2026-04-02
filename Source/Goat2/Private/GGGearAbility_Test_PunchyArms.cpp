#include "GGGearAbility_Test_PunchyArms.h"

UGGGearAbility_Test_PunchyArms::UGGGearAbility_Test_PunchyArms() {
    this->bReplicateInputDirectly = true;
    this->ReplicationPolicy = EGameplayAbilityReplicationPolicy::ReplicateYes;
    this->InstancingPolicy = EGameplayAbilityInstancingPolicy::InstancedPerActor;
    this->HoldForLaunch = 1.00f;
    this->LaunchPower = 700.00f;
    this->GroundPunchParticle = NULL;
    this->GroundPunchSound = NULL;
    this->PunchyArms = NULL;
}


