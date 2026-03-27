#include "GGGoatGear_Skel_GravityGun.h"
#include "Net/UnrealNetwork.h"

UGGGoatGear_Skel_GravityGun::UGGGoatGear_Skel_GravityGun(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->HoldLocationDistanceInFront = 100.00f;
    this->ActorBoundsDistanceScalar = 1.00f;
    this->HoldLocationHeightOffset = 60.00f;
    this->PhysicsHandleAngularDamping = 25.00f;
    this->PhysicsHandleAngularStiffness = 50000.00f;
    this->PhysicsHandleInterpolationSpeed = 15.00f;
    this->EffectsSocket = TEXT("MuzzleSocket");
    this->GrabParticle = NULL;
    this->ObjectHeldParticle = NULL;
    this->HoldingParticle = NULL;
    this->ChargingParticle = NULL;
    this->ReleaseParticle = NULL;
    this->ThrowParticle = NULL;
    this->GrabFailedParticle = NULL;
    this->GrabSound = NULL;
    this->HoldingSound = NULL;
    this->ChargingSound = NULL;
    this->ReleaseSound = NULL;
    this->ThrowSound = NULL;
    this->GrabFailedSound = NULL;
    this->PhysicsHandle = NULL;
    this->ObjectHeldPSC = NULL;
    this->HoldingPSC = NULL;
    this->HoldingSoundComp = NULL;
    this->ChargingPSC = NULL;
    this->ChargingSoundComp = NULL;
}

void UGGGoatGear_Skel_GravityGun::OnRep_GravityGunValues() {
}

void UGGGoatGear_Skel_GravityGun::MulticastThrowActor_Implementation(const FVector& Impulse) {
}

void UGGGoatGear_Skel_GravityGun::MulticastPlayThrowEffects_Implementation() {
}

void UGGGoatGear_Skel_GravityGun::MulticastPlayReleaseEffects_Implementation() {
}

void UGGGoatGear_Skel_GravityGun::MulticastPlayGrabEffects_Implementation() {
}

void UGGGoatGear_Skel_GravityGun::MulticastPlayFailEffects_Implementation() {
}

void UGGGoatGear_Skel_GravityGun::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UGGGoatGear_Skel_GravityGun, GravityGunValues);
}


