#include "GGStatusEffectSlippery.h"
#include "EStatusEffectTypes.h"

AGGStatusEffectSlippery::AGGStatusEffectSlippery(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->StatusEffectType = EStatusEffectTypes::SET_Slippery;
    this->CreateOverlapShapes = false;
    this->SpreadStatusEffectType = EStatusEffectTypes::SET_Slippery;
    this->bSetToBurningDuration = true;
    this->SlipperyTrailParticle = NULL;
    this->SlipperyTrailParticleFast = NULL;
    this->InAirTrailParticle = NULL;
    this->StartTransitionParticle = NULL;
    this->SlipperyGroundTrailParticle = NULL;
    this->GoatSlipperyGroundTrailParticle = NULL;
    this->VehicleSlipperyGroundTrailParticle = NULL;
    this->StartParticle = NULL;
    this->FastSlipperyThreshold = 500.00f;
    this->StartSoundGoat = NULL;
    this->StartSoundNPCAndProps = NULL;
    this->SlipperyTrail = NULL;
    this->SlipperyTrailFast = NULL;
    this->InAirTrail = NULL;
    this->SlipperyGroundTrail = NULL;
    this->SlipperyTrailActor = NULL;
    this->bSpawnSlipperyGroundTrail = true;
    this->SlipperyTailActorClass = NULL;
    this->DistanceNeededForPoint = 200.00f;
}

AGGSlipperyTrail* AGGStatusEffectSlippery::GetSlipperyTrailActor() const {
    return NULL;
}


