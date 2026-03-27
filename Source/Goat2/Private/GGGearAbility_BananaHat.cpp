#include "GGGearAbility_BananaHat.h"

UGGGearAbility_BananaHat::UGGGearAbility_BananaHat() {
    this->InstancingPolicy = EGameplayAbilityInstancingPolicy::InstancedPerActor;
    this->NetExecutionPolicy = EGameplayAbilityNetExecutionPolicy::ServerOnly;
    this->BananaProjectileClass = NULL;
    this->BananaShootVelocity = 1000.00f;
    this->BananaShootRandomRotationVelocity = 500.00f;
    this->BananaShootPitchAngle = 5.00f;
    this->BananaShootRandomPitchAngle = 5.00f;
    this->BananaSpawnOffset = 20.00f;
    this->MaxSpawnedBananas = 15;
    this->bShootAtRandomDirection = true;
}


