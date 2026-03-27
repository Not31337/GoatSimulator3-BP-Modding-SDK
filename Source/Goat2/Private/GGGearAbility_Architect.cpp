#include "GGGearAbility_Architect.h"

UGGGearAbility_Architect::UGGGearAbility_Architect() {
    this->bReplicateInputDirectly = true;
    this->InstancingPolicy = EGameplayAbilityInstancingPolicy::InstancedPerActor;
    this->HatComponent = NULL;
    this->bShowDebug = false;
}


