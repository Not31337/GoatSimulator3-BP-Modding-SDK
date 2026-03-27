#include "GGGearAbility_PoliceCap.h"

UGGGearAbility_PoliceCap::UGGGearAbility_PoliceCap() {
    this->InstancingPolicy = EGameplayAbilityInstancingPolicy::InstancedPerActor;
    this->NetExecutionPolicy = EGameplayAbilityNetExecutionPolicy::ServerOnly;
    this->HandcuffsProjectileClass = NULL;
    this->ForwardSpawnOffset = 50.00f;
    this->UpwardSpawnOffset = 25.00f;
    this->ShootPitchAngle = 5.00f;
}


