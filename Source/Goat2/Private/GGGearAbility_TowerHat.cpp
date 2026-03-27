#include "GGGearAbility_TowerHat.h"

UGGGearAbility_TowerHat::UGGGearAbility_TowerHat() {
    this->bReplicateInputDirectly = true;
    this->InstancingPolicy = EGameplayAbilityInstancingPolicy::InstancedPerActor;
    this->KeyHoldTimeToRemoveAllHats = 0.50f;
    this->StackParticle = NULL;
    this->HatsToCompleteInstinct = 25;
    this->GearMesh = NULL;
}

void UGGGearAbility_TowerHat::OnPActorBeingDestroyed(AActor* PActor, TEnumAsByte<EEndPlayReason::Type> EndPlayReason) {
}


