#include "GGCharacterSandParticles.h"

UGGCharacterSandParticles::UGGCharacterSandParticles(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ValidSurfaces.AddDefaulted(2);
    this->bPlayImpactEffects = true;
    this->ImpactParticle = NULL;
    this->ImpactParticleCooldown = 0.25f;
    this->MinImpactSize = 1500.00f;
    this->bPlayStepEffects = true;
    this->StepTraceDistance = 25.00f;
    this->StepParticle = NULL;
    this->bPlayLandedEffects = true;
    this->LandedParticle = NULL;
    this->OwnerCharacter = NULL;
    this->OwnerNPC = NULL;
    this->OwnerGoat = NULL;
}

void UGGCharacterSandParticles::OnLanded(const FHitResult& Hit) {
}

void UGGCharacterSandParticles::OnHitMesh(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComponent, FVector NormalImpulse, const FHitResult& Hit) {
}

void UGGCharacterSandParticles::OnAnimNotifyTriggered(AGGCharacter* Character, const FAnimNotifyEvent& AnimNotifyEvent) {
}


