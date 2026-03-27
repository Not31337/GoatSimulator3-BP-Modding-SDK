#include "GGGearAbility_DamageHat.h"

UGGGearAbility_DamageHat::UGGGearAbility_DamageHat() {
    this->InstancingPolicy = EGameplayAbilityInstancingPolicy::NonInstanced;
    this->NetExecutionPolicy = EGameplayAbilityNetExecutionPolicy::ServerOnly;
    this->Range = 1000.00f;
    this->Power = 1500.00f;
}


