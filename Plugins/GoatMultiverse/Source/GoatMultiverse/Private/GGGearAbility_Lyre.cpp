#include "GGGearAbility_Lyre.h"

UGGGearAbility_Lyre::UGGGearAbility_Lyre() {
    this->ReplicationPolicy = EGameplayAbilityReplicationPolicy::ReplicateYes;
    this->InstancingPolicy = EGameplayAbilityInstancingPolicy::InstancedPerActor;
    this->NetExecutionPolicy = EGameplayAbilityNetExecutionPolicy::ServerOnly;
    this->ProjectileClass = NULL;
    this->HitUnSupportedActorTypeSound = NULL;
    this->SpawnVerticalAngleOffset = 10.00f;
    this->SpawnedLyre = NULL;
    this->LyreProjectile = NULL;
    this->LyreGearPart = NULL;
}

void UGGGearAbility_Lyre::OnProjectileDestroyed(AActor* DestroyedProjectile) {
}

void UGGGearAbility_Lyre::MulticastPlaySoundAtLocation_Implementation(FVector InLocation) {
}


