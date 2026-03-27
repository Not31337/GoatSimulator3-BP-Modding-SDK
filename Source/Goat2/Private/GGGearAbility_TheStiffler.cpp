#include "GGGearAbility_TheStiffler.h"

UGGGearAbility_TheStiffler::UGGGearAbility_TheStiffler() {
    this->InstancingPolicy = EGameplayAbilityInstancingPolicy::InstancedPerActor;
    this->NetExecutionPolicy = EGameplayAbilityNetExecutionPolicy::ServerOnly;
    this->NeedleActorClass = NULL;
    this->MaxNeedles = 20;
}


