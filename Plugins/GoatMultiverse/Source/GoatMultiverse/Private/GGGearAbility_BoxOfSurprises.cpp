#include "GGGearAbility_BoxOfSurprises.h"

UGGGearAbility_BoxOfSurprises::UGGGearAbility_BoxOfSurprises() {
    this->ReplicationPolicy = EGameplayAbilityReplicationPolicy::ReplicateYes;
    this->InstancingPolicy = EGameplayAbilityInstancingPolicy::InstancedPerActor;
    this->PActorClass = NULL;
    this->PActorStartScale = 0.25f;
    this->MaxSpawnedActors = 20;
    this->PActorSpawnDelay = 0.14f;
    this->LaunchImpulse = 2500.00f;
    this->LaunchAngularImpulse = 1000.00f;
}


