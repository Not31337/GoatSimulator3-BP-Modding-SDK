#include "PhysicsActorImpactSettings.h"

FPhysicsActorImpactSettings::FPhysicsActorImpactSettings() {
    this->PlayOnHit = false;
    this->MinVelocity = 0.00f;
    this->PlayOnDamgeTaken = false;
    this->ImpactDamageThreshold = 0.00f;
    this->ImpactTriggerMinInterval = 0.00f;
    this->ShouldPlayImpactSounds = false;
    this->ImpactSound = NULL;
    this->MinSoundVolume = 0.00f;
    this->MaxSoundVolume = 0.00f;
    this->MaxVolumeImpactVelocity = 0.00f;
    this->SpawnImpactParticleComp = false;
    this->ImpactEffect = NULL;
    this->SpawnParticleOnHit = false;
    this->SpawnParticleOnDamage = false;
    this->PlayAtHitLocation = false;
}

