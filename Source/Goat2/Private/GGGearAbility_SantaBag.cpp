#include "GGGearAbility_SantaBag.h"

UGGGearAbility_SantaBag::UGGGearAbility_SantaBag() {
    this->InstancingPolicy = EGameplayAbilityInstancingPolicy::InstancedPerActor;
    this->NetExecutionPolicy = EGameplayAbilityNetExecutionPolicy::ServerOnly;
    this->GiftProjectileClass = NULL;
    this->VerticalLaunchAngleOffset = 20.00f;
    this->BagGear = NULL;
}


