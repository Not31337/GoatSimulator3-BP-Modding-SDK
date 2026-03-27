#include "GGGoatGear_AltGoat_Kaiju.h"
#include "Net/UnrealNetwork.h"

UGGGoatGear_AltGoat_Kaiju::UGGGoatGear_AltGoat_Kaiju(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ChargeParticle = NULL;
    this->ChargeSound = NULL;
    this->BeamStartBurstParticle = NULL;
    this->BeamNiagaraSystem = NULL;
    this->BeamImpactParticle = NULL;
    this->BeamSkidMarkParticle = NULL;
    this->BeamHitParticle = NULL;
    this->BeamSound = NULL;
    this->PreBeamDelay = 0.50f;
    this->BeamLength = 15000.00f;
    this->BeamRadius = 250.00f;
    this->AimPitchOffset = 20.00f;
    this->BeamInterpSpeed = 2.00f;
    this->BeamMaxAngle = 90.00f;
    this->GroundImpactDamageRadius = 1000.00f;
    this->PhysActorForce = 3000.00f;
    this->CharacterForce = 3000.00f;
    this->VehicleForce = 50000.00f;
    this->DefaultForce = 5000.00f;
    this->MinimumTimeBetweenHits = 1.00f;
    this->SkidmarkMaxDistance = 500.00f;
    this->AbilityCameraShakeClass = NULL;
    this->VehiclesForInstinct = 5;
    this->ForceCompClass = NULL;
    this->SprintCameraShakeClass = NULL;
    this->LandingAndImpactCameraShake = NULL;
    this->ImpactMinSizeForRagdollHit = 35000.00f;
    this->RagdollImpactCooldown = 1.00f;
    this->LandingImpulseRadius = 500.00f;
    this->LandingImpulseForce = 1000.00f;
    this->LandingImpulseVehicleForce = 3000.00f;
    this->SprintSpeedForForceAndShake = 1000.00f;
    this->KaijuAnimInstance = NULL;
    this->ChargeParticleComp = NULL;
    this->ChargeAudioComp = NULL;
    this->BeamParticleComp = NULL;
    this->BeamImpactParticleComp = NULL;
    this->BeamSkidMarkParticleComp = NULL;
    this->BeamAudioComp = NULL;
    this->AbilityCameraShake = NULL;
    this->ForceComp = NULL;
    this->SprintCameraShake = NULL;
}

void UGGGoatGear_AltGoat_Kaiju::ServerSetWantToSprint_Implementation(bool bWantsTo) {
}

void UGGGoatGear_AltGoat_Kaiju::OnRep_KaijuBeam() {
}

void UGGGoatGear_AltGoat_Kaiju::OnLanded(const FHitResult& Hit) {
}

void UGGGoatGear_AltGoat_Kaiju::OnHit(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComponent, FVector NormalImpulse, const FHitResult& Hit) {
}

void UGGGoatGear_AltGoat_Kaiju::OnCharacterHasJumped(AGGCharacter* Character) {
}

void UGGGoatGear_AltGoat_Kaiju::MulticastHitEffects_Implementation(const TArray<FVector_NetQuantize>& HitLocations) {
}

void UGGGoatGear_AltGoat_Kaiju::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UGGGoatGear_AltGoat_Kaiju, KaijuBeam);
}


