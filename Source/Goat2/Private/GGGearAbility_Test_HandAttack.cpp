#include "GGGearAbility_Test_HandAttack.h"

UGGGearAbility_Test_HandAttack::UGGGearAbility_Test_HandAttack() {
    this->InstancingPolicy = EGameplayAbilityInstancingPolicy::InstancedPerActor;
    this->HandClass = NULL;
    this->BeamPArticle = NULL;
    this->HoldForSlam = 0.50f;
    this->AttackHand = NULL;
    this->BeamParticleComp = NULL;
}


