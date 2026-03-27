#include "GGGearAbility_Brainiac.h"

UGGGearAbility_Brainiac::UGGGearAbility_Brainiac() {
    this->bReplicateInputDirectly = true;
    this->BrainWaveClass = NULL;
    this->FizzleParticleUpwardOffset = 15.00f;
    this->FizzleParticleForwardOffset = 15.00f;
    this->ConfusedParticleUpwardOffset = 35.00f;
    this->ConfusedParticleForwardOffset = 10.00f;
    this->AngryParticleUpwardOffset = 35.00f;
    this->AngryParticleForwardOffset = 10.00f;
    this->IdleAnimation = NULL;
    this->BeamingAnimation = NULL;
    this->FailAnimation = NULL;
    this->FailAnimationTime = 3.00f;
    this->FailSound = NULL;
    this->NPCStopInflationSound = NULL;
    this->DeactivationSound = NULL;
    this->FizzleParticle = NULL;
    this->ConfusedParticle = NULL;
    this->AngryParticle = NULL;
    this->BrainWave = NULL;
    this->SkelMeshComp = NULL;
    this->ConfusedParticleComponent = NULL;
    this->FizzleParticleComponent = NULL;
    this->AngryParticleComponent = NULL;
}


