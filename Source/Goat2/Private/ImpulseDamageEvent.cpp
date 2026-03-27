#include "ImpulseDamageEvent.h"

FImpulseDamageEvent::FImpulseDamageEvent() {
    this->VelChange = false;
    this->CanTriggerRagdoll = false;
    this->CanTriggerExplosion = EExplosionTrigger::ET_Yes;
    this->TriggerTimer = 0.00f;
    this->DamageRadius = 0.00f;
    this->DamagedBodyIndex = 0;
    this->bCanCauseMoodChange = false;
    this->bCanBreakDestructibles = false;
    this->bClientSidePredictedEvent = false;
    this->bDamageBypassCharacterResilience = false;
}

