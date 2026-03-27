#include "GGGearAbility_Pizza.h"

UGGGearAbility_Pizza::UGGGearAbility_Pizza() {
    this->InstancingPolicy = EGameplayAbilityInstancingPolicy::InstancedPerActor;
    this->NetExecutionPolicy = EGameplayAbilityNetExecutionPolicy::ServerOnly;
    this->PizzaSliceClass = NULL;
    this->bPizzaSliceSpawnWithRandomRotation = true;
    this->PizzaSliceShootVelocity = 1000.00f;
    this->PizzaSliceShootRandomRotationVelocity = 500.00f;
    this->PizzaSliceShootSpreadAngle = 0.00f;
    this->PizzaSliceShootPitchAngle = 0.00f;
    this->MaxSpawnedPizzaSlices = 15;
}


