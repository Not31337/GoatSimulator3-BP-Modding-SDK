#include "GGGearAbility_OdenEye.h"

UGGGearAbility_OdenEye::UGGGearAbility_OdenEye() {
    this->bReplicateInputDirectly = true;
    this->BeamClass = NULL;
    this->FailParticleUpwardOffset = 15.00f;
    this->FailParticleForwardOffset = 15.00f;
    this->FailSound = NULL;
    this->FailParticle = NULL;
    this->OnOffParticle = NULL;
    this->OngoingParticle = NULL;
    this->OdenBeam = NULL;
    this->Gear = NULL;
    this->FailParticleComp = NULL;
    this->OngoingParticleComp = NULL;
}


