#include "GGGearAbility_DevilHorns.h"

UGGGearAbility_DevilHorns::UGGGearAbility_DevilHorns() {
    this->bReplicateInputDirectly = true;
    this->InstancingPolicy = EGameplayAbilityInstancingPolicy::InstancedPerActor;
    this->ForceActor = NULL;
    this->DistanceFromGoat = 400.00f;
    this->ActivationSound = NULL;
    this->DeactivationSound = NULL;
    this->LoopingSound = NULL;
    this->StopAbilityParticle = NULL;
    this->DemonMaskGear = NULL;
    this->SpawnedForceActor = NULL;
    this->ForceComp = NULL;
    this->AudioComponent = NULL;
}


