#include "GGGoatGear_Back_CthillaTentacles.h"

UGGGoatGear_Back_CthillaTentacles::UGGGoatGear_Back_CthillaTentacles(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bHasPassiveEffect = true;
    this->GrabDistance = 150.00f;
    this->DelayBetweenGrabs = 1.00f;
    this->GrabChance = 100.00f;
    this->MaxGrabbedWaitTime = 1.00f;
    this->ThrowImpulse = 1000.00f;
    this->SlapDistance = 100.00f;
    this->DelayBetweenSlaps = 5.00f;
    this->SlapChance = 50.00f;
    this->SlapImpulse = 1000.00f;
    this->TentacleCollisionRadius = 17.00f;
    this->DamageType = NULL;
    this->TentacleAnimBlendEasingFunction = EEasingFunc::EaseIn;
    this->TimeToBlendAnim = 0.20f;
    this->SlapSound = NULL;
    this->SlapParticleSystem = NULL;
    this->GrabSound = NULL;
    this->GrabParticleSystem = NULL;
    this->ThrowSound = NULL;
    this->ThrowParticleSystem = NULL;
    this->bGearActive = false;
}

void UGGGoatGear_Back_CthillaTentacles::MulticastSetTentacleState_Implementation(bool bIsLeft, EGGTentacleState NewState) {
}

void UGGGoatGear_Back_CthillaTentacles::MulticastSetGrabbedWaitTime_Implementation(bool bIsLeft, float WaitTime) {
}

void UGGGoatGear_Back_CthillaTentacles::MulticastSetConstraint_Implementation(bool bIsLeft, AActor* Target) {
}

void UGGGoatGear_Back_CthillaTentacles::MulticastReleaseConstraint_Implementation(bool bIsLeft, AActor* Target) {
}

void UGGGoatGear_Back_CthillaTentacles::MulticastPlayThrowEffects_Implementation(FName Socket) {
}

void UGGGoatGear_Back_CthillaTentacles::MulticastPlaySlapEffects_Implementation(FVector HitPoint) {
}

void UGGGoatGear_Back_CthillaTentacles::MulticastPlayGrabEffects_Implementation(FName Socket) {
}

void UGGGoatGear_Back_CthillaTentacles::MulticastCreateConstraint_Implementation(bool bIsLeft) {
}


