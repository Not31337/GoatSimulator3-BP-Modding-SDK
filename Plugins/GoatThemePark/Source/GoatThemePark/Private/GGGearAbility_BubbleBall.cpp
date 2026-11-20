#include "GGGearAbility_BubbleBall.h"

UGGGearAbility_BubbleBall::UGGGearAbility_BubbleBall() {
    this->InstancingPolicy = EGameplayAbilityInstancingPolicy::InstancedPerActor;
    this->NetExecutionPolicy = EGameplayAbilityNetExecutionPolicy::ServerOnly;
}


