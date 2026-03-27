#include "GGGearAbility_PotteryWheel.h"

UGGGearAbility_PotteryWheel::UGGGearAbility_PotteryWheel() {
    this->bReplicateInputDirectly = true;
    this->ReplicationPolicy = EGameplayAbilityReplicationPolicy::ReplicateYes;
    this->InstancingPolicy = EGameplayAbilityInstancingPolicy::InstancedPerActor;
    this->ProjectileSpawnerSocket = TEXT("ProjectileSpawnerSocket");
    this->GnomeActorClass = NULL;
    this->MaxGnomeCount = 123456789;
    this->MakeGnomeDuration = 1.00f;
    this->SpinDownAnimationRate = 1.00f;
    this->SpinSpeedCurve = NULL;
    this->GnomeScaleCurve = NULL;
    this->SpawnGnomeSound = NULL;
    this->WindUpSound = NULL;
    this->WindDownSound = NULL;
    this->SpawnGnomeParticle = NULL;
    this->OngoingSpinParticleComp = NULL;
    this->OngoingSpinParticle = NULL;
    this->Gear = NULL;
    this->WindUpAudioComp = NULL;
    this->WindDownAudioComp = NULL;
    this->bHoldingAbility = false;
}

void UGGGearAbility_PotteryWheel::PlayGnomeSpawnEffects_Implementation(FTransform SpawnTransform) {
}

void UGGGearAbility_PotteryWheel::OnGnomeDestroyed(AGGGoat* DestroyingGoat, AGGJumpingPActor* DestroyedGnome) {
}


