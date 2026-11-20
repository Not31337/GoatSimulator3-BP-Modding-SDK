#include "GGWaterEffectOverride.h"

FGGWaterEffectOverride::FGGWaterEffectOverride() {
    this->EnterSound = NULL;
    this->bOverrideEnterSound = false;
    this->ExitSound = NULL;
    this->bOverrideExitSound = false;
    this->FloatingSound = NULL;
    this->bOverrideFloatingSound = false;
    this->EnterParticle = NULL;
    this->bOverrideEnterParticle = false;
    this->ExitParticle = NULL;
    this->bOverrideExitParticle = false;
    this->FloatingParticle = NULL;
    this->bOverrideFloatingParticle = false;
    this->FloatingMovingParticle = NULL;
    this->bOverrideFloatingMovingParticle = false;
    this->FloatingMovingFastParticle = NULL;
    this->bOverrideFloatingMovingFastParticle = false;
}

