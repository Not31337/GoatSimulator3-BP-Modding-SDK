#include "GGGearAbility_Hotdogian.h"

UGGGearAbility_Hotdogian::UGGGearAbility_Hotdogian() {
    this->NetExecutionPolicy = EGameplayAbilityNetExecutionPolicy::ServerOnly;
    this->ProjectileClass = NULL;
    this->SpawnRotationVerticalOffset = 20.00f;
    this->InitialSpeed = 1000.00f;
    this->ForwardSpawnOffset = 20.00f;
}


