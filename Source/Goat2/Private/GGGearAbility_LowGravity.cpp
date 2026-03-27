#include "GGGearAbility_LowGravity.h"

UGGGearAbility_LowGravity::UGGGearAbility_LowGravity() {
    this->InstancingPolicy = EGameplayAbilityInstancingPolicy::InstancedPerActor;
    this->GravitySphereActorClass = NULL;
    this->ForceActor = NULL;
    this->bShouldAffectOtherActors = false;
    this->LowGravity = 0.40f;
    this->HelmetComponent = NULL;
    this->GravitySphere = NULL;
    this->SpawnedForceActor = NULL;
    this->ForceComp = NULL;
}


