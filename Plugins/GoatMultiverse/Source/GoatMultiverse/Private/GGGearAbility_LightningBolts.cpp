#include "GGGearAbility_LightningBolts.h"

UGGGearAbility_LightningBolts::UGGGearAbility_LightningBolts() {
    this->bReplicateInputDirectly = true;
    this->ReplicationPolicy = EGameplayAbilityReplicationPolicy::ReplicateYes;
    this->InstancingPolicy = EGameplayAbilityInstancingPolicy::InstancedPerActor;
    this->MinNumberOfBolts = 1;
    this->MaxNumberOfBolts = 10;
    this->ChargeTimePerBolt = 0.50f;
    this->bAutoReleaseOnMaxCharge = false;
    this->DelayBetweenBoltImpacts = 0.00f;
    this->MinSpawnDistance = 400.00f;
    this->DistanceBetweenBolts = 300.00f;
    this->MaxHorizontalSpread = 120.00f;
    this->TraceDistanceUp = 200.00f;
    this->TraceDistanceDown = 40000.00f;
    this->TraceRadius = 50.00f;
    this->TraceChannel = TraceTypeQuery1;
    this->ExplosiveActorClass = NULL;
    this->ExplosionDelay = 0.10f;
}


