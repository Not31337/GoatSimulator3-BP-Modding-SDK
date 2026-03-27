#include "GGGearAbility_EggThrow.h"

UGGGearAbility_EggThrow::UGGGearAbility_EggThrow() {
    this->bReplicateInputDirectly = true;
    this->ReplicationPolicy = EGameplayAbilityReplicationPolicy::ReplicateYes;
    this->InstancingPolicy = EGameplayAbilityInstancingPolicy::InstancedPerActor;
    this->NetExecutionPolicy = EGameplayAbilityNetExecutionPolicy::ServerInitiated;
    this->LickOverrideAbility = NULL;
}

void UGGGearAbility_EggThrow::OnOwnerPreScaled(bool bIsBeingCatched) {
}

void UGGGearAbility_EggThrow::OnOwnerEnteredVehicle(AGGCharacter* Character, AGGVehicle* Vehicle) {
}

void UGGGearAbility_EggThrow::OnOwnerCatched(AActor* CatchedActor, AActor* Catcher) {
}

void UGGGearAbility_EggThrow::MulticastEatActor_Implementation(AActor* EatenActor, AGGGoat* Goat, FGGCatchOptions Options) {
}

UGGGoatGear_Static_EggSaddle* UGGGearAbility_EggThrow::GetEggSaddle(const AGGGoat* Goat) const {
    return NULL;
}

void UGGGearAbility_EggThrow::ForceReleaseCatchedActor() {
}

bool UGGGearAbility_EggThrow::CanThrow_Implementation(const AGGGoat* Goat, const UGGGoatGear_Static_EggSaddle* EggSaddle) const {
    return false;
}

bool UGGGearAbility_EggThrow::CanEat_Implementation(const AGGGoat* Goat, const UGGGoatGear_Static_EggSaddle* EggSaddle) const {
    return false;
}


