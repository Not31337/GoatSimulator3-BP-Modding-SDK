#include "GGGearAbility_TankSmash.h"

UGGGearAbility_TankSmash::UGGGearAbility_TankSmash() {
    this->InstancingPolicy = EGameplayAbilityInstancingPolicy::InstancedPerActor;
    this->ForceActorClass = NULL;
    this->SmashCameraShake = NULL;
    this->DownwardsVelocity = 0.00f;
    this->ForceComp = NULL;
}

void UGGGearAbility_TankSmash::OnLanded(const FHitResult& Hit) {
}

void UGGGearAbility_TankSmash::MulticastCreateForceActor_Implementation(AGGGoat* Goat) {
}


