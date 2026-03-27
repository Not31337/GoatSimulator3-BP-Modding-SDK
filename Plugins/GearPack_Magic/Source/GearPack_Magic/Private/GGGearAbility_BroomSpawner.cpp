#include "GGGearAbility_BroomSpawner.h"

UGGGearAbility_BroomSpawner::UGGGearAbility_BroomSpawner() {
    this->ReplicationPolicy = EGameplayAbilityReplicationPolicy::ReplicateYes;
    this->InstancingPolicy = EGameplayAbilityInstancingPolicy::InstancedPerActor;
    this->RecallSound = NULL;
    this->ReleaseSound = NULL;
}

void UGGGearAbility_BroomSpawner::ServerPutBroomAway_Implementation() {
}

void UGGGearAbility_BroomSpawner::ReleaseAnimationFinished() {
}

void UGGGearAbility_BroomSpawner::OnGoatStartBeingScaled(bool bIsBeingCatched) {
}

void UGGGearAbility_BroomSpawner::OnGoatEnterVehicle(AGGCharacter* Character, AGGVehicle* Vehicle) {
}

void UGGGearAbility_BroomSpawner::OnGoatCatched(AActor* CatchedActor, AActor* Catcher) {
}

void UGGGearAbility_BroomSpawner::OnCinematicUpdated(bool bCinematicFinished) {
}

void UGGGearAbility_BroomSpawner::MulticastPutBroomAwayVFX_Implementation(AGGGoat* Goat) {
}

void UGGGearAbility_BroomSpawner::MulticastPlayReleaseVFX_Implementation(AGGGoat* Goat) {
}

void UGGGearAbility_BroomSpawner::AssignBroomSpawnerAbility() {
}


