#include "GGGoatAbility_Baa.h"
#include "EAbilityInput.h"

UGGGoatAbility_Baa::UGGGoatAbility_Baa() {
    this->bReplicateInputDirectly = true;
    this->InstancingPolicy = EGameplayAbilityInstancingPolicy::InstancedPerActor;
    this->ActivationInput = EAbilityInput::Baa;
    this->GoatGreetingRadius = 600.00f;
    this->VehicleSlowdownRadius = 800.00f;
    this->SlowDownValue = 0.20f;
    this->SlowDownDuration = 4.00f;
    this->bDrawVehicleSlowdown = false;
    this->BaaAbilityData.AddDefaulted(6);
}


