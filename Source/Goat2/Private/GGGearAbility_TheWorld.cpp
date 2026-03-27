#include "GGGearAbility_TheWorld.h"

UGGGearAbility_TheWorld::UGGGearAbility_TheWorld() {
    this->InstancingPolicy = EGameplayAbilityInstancingPolicy::InstancedPerActor;
    this->NetExecutionPolicy = EGameplayAbilityNetExecutionPolicy::ServerOnly;
    this->MIC = NULL;
    this->TimeDilation = 0.01f;
    this->PostProcessAnimationLength = 0.00f;
    this->PostProcessMaterial = NULL;
}

void UGGGearAbility_TheWorld::OutAnimationFinished() {
}


