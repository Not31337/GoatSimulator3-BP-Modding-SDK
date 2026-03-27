#include "GGGearAbility_PersonalHacker.h"

UGGGearAbility_PersonalHacker::UGGGearAbility_PersonalHacker() {
    this->bReplicateInputDirectly = true;
    this->BeamClass = NULL;
    this->FailParticleUpwardOffset = 15.00f;
    this->FailParticleForwardOffset = 15.00f;
    this->FailSound = NULL;
    this->FailParticle = NULL;
    this->OnOffParticle = NULL;
    this->OngoingParticle = NULL;
    this->bOldAbilityVersion = false;
    this->HackerBeam = NULL;
    this->Gear = NULL;
    this->FailParticleComp = NULL;
    this->OngoingParticleComp = NULL;
}


