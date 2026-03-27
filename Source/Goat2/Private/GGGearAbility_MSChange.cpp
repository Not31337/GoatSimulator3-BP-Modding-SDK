#include "GGGearAbility_MSChange.h"

UGGGearAbility_MSChange::UGGGearAbility_MSChange() {
    this->NetExecutionPolicy = EGameplayAbilityNetExecutionPolicy::ServerOnly;
    this->MSGameplayEffect = NULL;
    this->MSChangeMagnitude = 1.00f;
    this->RemoveMSChangeOnEnd = false;
}


