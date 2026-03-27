#include "GGGearAbility_TinyWings.h"

UGGGearAbility_TinyWings::UGGGearAbility_TinyWings() {
    this->bReplicateInputDirectly = true;
    this->InstancingPolicy = EGameplayAbilityInstancingPolicy::InstancedPerActor;
    this->GravityScaleGameplayEffect = NULL;
    this->ResetTime = 0.50f;
    this->SlowGravityScale = 0.05f;
    this->RightParticleSocket = TEXT("RightParticleSocket");
    this->LeftParticleSocket = TEXT("LeftParticleSocket");
    this->LeftFlyParticleComp = NULL;
    this->RightFlyParticleComp = NULL;
    this->AudioComponent = NULL;
}

void UGGGearAbility_TinyWings::ResetGravityScale() {
}


