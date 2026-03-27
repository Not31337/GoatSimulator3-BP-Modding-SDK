#include "GGGearAbility_QueenGoat.h"

UGGGearAbility_QueenGoat::UGGGearAbility_QueenGoat() {
    this->NetExecutionPolicy = EGameplayAbilityNetExecutionPolicy::ServerOnly;
    this->GoatPActor = NULL;
    this->GoatLifespan = 30.00f;
}


