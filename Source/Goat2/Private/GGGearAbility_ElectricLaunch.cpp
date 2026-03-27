#include "GGGearAbility_ElectricLaunch.h"

UGGGearAbility_ElectricLaunch::UGGGearAbility_ElectricLaunch() {
    this->InstancingPolicy = EGameplayAbilityInstancingPolicy::NonInstanced;
    this->LaunchVelocity = 1200.00f;
    this->SpreadElectricity = true;
    this->SpreadRadius = 400.00f;
}


