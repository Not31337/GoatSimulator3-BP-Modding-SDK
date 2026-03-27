#include "GGGroundAlignedParticleComponent.h"

UGGGroundAlignedParticleComponent::UGGGroundAlignedParticleComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->GroundParticleComp = NULL;
    this->InAirTrailParticleComp = NULL;
    this->GroundParticle = NULL;
    this->InAirParticle = NULL;
    this->LifeSpan = -1.00f;
    this->OwnerActor = NULL;
    this->OwnerCharacter = NULL;
    this->OwnerPActor = NULL;
}


