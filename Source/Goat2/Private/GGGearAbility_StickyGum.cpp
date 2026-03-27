#include "GGGearAbility_StickyGum.h"

UGGGearAbility_StickyGum::UGGGearAbility_StickyGum() {
    this->NetExecutionPolicy = EGameplayAbilityNetExecutionPolicy::ServerOnly;
    this->PelletCount = 15;
    this->SpreadAngleMax = 30;
    this->PelletRange = 1000;
    this->PelletImpulsePower = 50000.00f;
    this->PelletCharacterImpulsePower = 1000.00f;
    this->PeletCharacterUpForcePercentage = 0.10f;
}


