#include "GGGearAbility_Tacos.h"

UGGGearAbility_Tacos::UGGGearAbility_Tacos() {
    this->InstancingPolicy = EGameplayAbilityInstancingPolicy::InstancedPerActor;
    this->ForceActor = NULL;
    this->UpwardsVelocity = 800.00f;
    this->bPredictForce = false;
    this->GroundParticleDistanceFromGround = 50.00f;
    this->bShowDebugTrace = false;
}

void UGGGearAbility_Tacos::OnLanded(const FHitResult& Hit) {
}


