#include "GGGoatGear_Head_CuckooClock.h"

UGGGoatGear_Head_CuckooClock::UGGGoatGear_Head_CuckooClock(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->CuckooClockIdleSequence = NULL;
    this->CuckooClockPunchSequence = NULL;
    this->SphereTraceRadius = 20.00f;
    this->PunchAnimStartTime = -1.00f;
    this->PunchTraceStartTime = 0.00f;
    this->PunchTraceEndTime = 0.00f;
    this->PunchAnimLength = 0.00f;
    this->BaseImpulse = 1000.00f;
    this->CharacterImpulseScalar = 1.00f;
    this->VehicleImpulseScalar = 10.00f;
    this->PActorImpulseScalar = 1.00f;
    this->BaseDamage = 500.00f;
    this->CharacterDamageScalar = 1.00f;
    this->VehicleDamageScalar = 5.00f;
    this->PActorDamageScalar = 1.00f;
    this->DamageRadius = 150.00f;
    this->DamageType = NULL;
    this->PunchHitSound = NULL;
    this->PunchHitParticles = NULL;
}

void UGGGoatGear_Head_CuckooClock::PlayPunchAnim_Implementation() {
}

void UGGGoatGear_Head_CuckooClock::PlayHitEffects_Implementation(FVector_NetQuantize100 HitLocation) {
}


