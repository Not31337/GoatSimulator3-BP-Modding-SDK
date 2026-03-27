#include "GGGearAbility_PortableJunkCannon.h"
#include "Net/UnrealNetwork.h"

UGGGearAbility_PortableJunkCannon::UGGGearAbility_PortableJunkCannon() {
    this->ReplicationPolicy = EGameplayAbilityReplicationPolicy::ReplicateYes;
    this->InstancingPolicy = EGameplayAbilityInstancingPolicy::InstancedPerActor;
    this->CrateClass = NULL;
    this->JunkCannonSpawnHeight = 10000.00f;
    this->DownTraceDist = 100.00f;
    this->DestroyOldCannonEffects = NULL;
    this->TargetEffects = NULL;
    this->SpawnedCrate = NULL;
    this->SpawnedActorFromCrate = NULL;
}

void UGGGearAbility_PortableJunkCannon::SpawnTargetEffects_Implementation(FVector SpawnLocation, FRotator SpawnRotator) {
}

void UGGGearAbility_PortableJunkCannon::RemoveTargetEffects_Implementation() {
}

void UGGGearAbility_PortableJunkCannon::CrateActorSpawned(AActor* SpawnedActor) {
}

void UGGGearAbility_PortableJunkCannon::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UGGGearAbility_PortableJunkCannon, SpawnedCrate);
}


