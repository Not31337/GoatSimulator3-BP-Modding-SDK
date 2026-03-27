#include "GGGearAbility_Ostrich.h"
#include "EAbilityInput.h"

UGGGearAbility_Ostrich::UGGGearAbility_Ostrich() {
    this->bReplicateInputDirectly = true;
    this->InstancingPolicy = EGameplayAbilityInstancingPolicy::InstancedPerActor;
    this->ActivationInput = EAbilityInput::Jump;
    this->ResetTime = 0.50f;
    this->GlidingGravityScale = 0.05f;
    this->FlyingSound = NULL;
    this->AudioComponent = NULL;
}


