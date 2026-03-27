#include "GGVehicleAbility_SpeedBoost.h"

UGGVehicleAbility_SpeedBoost::UGGVehicleAbility_SpeedBoost() {
    this->InstancingPolicy = EGameplayAbilityInstancingPolicy::InstancedPerActor;
    this->Acceleration = 1000.00f;
    this->MaxSpeed = 2800.00f;
    this->MaxBoostDuration = 0.00f;
    this->BoostRecoveryDelay = 0.00f;
    this->BoostRecoverySpeed = 1.00f;
    this->MoveComp = NULL;
}

UGGVehicleAbility_SpeedBoost* UGGVehicleAbility_SpeedBoost::FindSpeedBoostAbilityInstance(const APawn* Vehicle) {
    return NULL;
}

float UGGVehicleAbility_SpeedBoost::CalculateRemainingBoostDuration() const {
    return 0.0f;
}

bool UGGVehicleAbility_SpeedBoost::AddSpeedBoostPercentage(const APawn* Vehicle, float Percentage) {
    return false;
}

bool UGGVehicleAbility_SpeedBoost::AddSpeedBoostDuration(const APawn* Vehicle, float Duration) {
    return false;
}


