#include "DelayedSpreadActorEffect.h"

FDelayedSpreadActorEffect::FDelayedSpreadActorEffect() {
    this->Actor = NULL;
    this->ParticleSystemComp = NULL;
    this->AudioComp = NULL;
    this->Timestamp = 0.00f;
}

