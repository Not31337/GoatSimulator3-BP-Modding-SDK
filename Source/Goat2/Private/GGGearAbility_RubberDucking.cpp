#include "GGGearAbility_RubberDucking.h"

UGGGearAbility_RubberDucking::UGGGearAbility_RubberDucking() {
    this->InstancingPolicy = EGameplayAbilityInstancingPolicy::InstancedPerActor;
    this->DuckClass = NULL;
    this->ChargeSoundClass = NULL;
    this->LaunchPower = 1000.00f;
    this->MaxSpawnedActors = 15;
    this->ChargeMaxDuration = 3.00f;
    this->ThrowParticle = NULL;
    this->NumDucksAtMaxCharge = 5;
    this->Gear = NULL;
    this->SpawnedChargeSound = NULL;
}

void UGGGearAbility_RubberDucking::ServerStartChargingSound_Implementation() {
}
bool UGGGearAbility_RubberDucking::ServerStartChargingSound_Validate() {
    return true;
}

void UGGGearAbility_RubberDucking::ServerFireDucks_Implementation(float ChargeDuration) {
}
bool UGGGearAbility_RubberDucking::ServerFireDucks_Validate(float ChargeDuration) {
    return true;
}

void UGGGearAbility_RubberDucking::OnMaxCharge() {
}

void UGGGearAbility_RubberDucking::IsChargingCheck() {
}


