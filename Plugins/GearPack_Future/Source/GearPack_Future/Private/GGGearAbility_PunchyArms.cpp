#include "GGGearAbility_PunchyArms.h"

UGGGearAbility_PunchyArms::UGGGearAbility_PunchyArms() {
    this->bReplicateInputDirectly = true;
    this->InstancingPolicy = EGameplayAbilityInstancingPolicy::InstancedPerActor;
    this->PunchyArms = NULL;
}


