#include "GGGearAbility_HeliumTubes.h"

UGGGearAbility_HeliumTubes::UGGGearAbility_HeliumTubes() {
    this->InstancingPolicy = EGameplayAbilityInstancingPolicy::InstancedPerActor;
    this->NetExecutionPolicy = EGameplayAbilityNetExecutionPolicy::ServerOnly;
    this->SyringeProjectileClass = NULL;
    this->SyringeShootPitchAngle = 20.00f;
}


