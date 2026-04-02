#include "GGGoatGear_Static_StasisBeam.h"
#include "Net/UnrealNetwork.h"

UGGGoatGear_Static_StasisBeam::UGGGoatGear_Static_StasisBeam(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->HoldLocationDistanceInFront = 250.00f;
    this->HoldLocDistanceAGSizeScalar = 3.00f;
    this->MinHoldDistanceFromGoat = 200.00f;
    this->MinDistanceAboveGoat = -300.00f;
    this->AimPitchOffset = 35.00f;
    this->ActorBoundsDistanceScalar = 1.00f;
    this->PhysicsHandleAngularDamping = 25.00f;
    this->PhysicsHandleAngularStiffness = 50000.00f;
    this->PhysicsHandleInterpolationSpeed = 15.00f;
    this->bDisableCollisionWhileGrabbed = true;
    this->VehicleInterpSpeed = 10.00f;
    this->ScrollRotateAmount = 20.00f;
    this->ActorGrabbedSound = NULL;
    this->ActorGrabFailSound = NULL;
    this->ActorGrabbedOngoingSound = NULL;
    this->ActorFrozenInPlaceSound = NULL;
    this->ActorGrabbedParticle = NULL;
    this->ActorGrabFailParticle = NULL;
    this->BeamPArticle = NULL;
    this->ActorFrozenInPlaceParticle = NULL;
    this->PickUpCameraShake = NULL;
    this->PickUpCameraShakeRadius = 1000.00f;
    this->StasisCameraShake = NULL;
    this->StasisUpCameraShakeRadius = 1000.00f;
    this->LocalGrabbedActor = NULL;
    this->GrabbedVehicle = NULL;
    this->PhysicsHandle = NULL;
    this->OngoingSoundComp = NULL;
    this->BeamParticleComp = NULL;
    this->TimesScrolled = 0;
}

void UGGGoatGear_Static_StasisBeam::ServerSetTimesScrolled_Implementation(const int32 NewCount) {
}

void UGGGoatGear_Static_StasisBeam::OnScrollInput(AGGPlayerController* Player, bool bUp) {
}

void UGGGoatGear_Static_StasisBeam::OnRep_StasisBeamValues() {
}

void UGGGoatGear_Static_StasisBeam::MulticastGrabActorEffects_Implementation(AActor* Actor) {
}

void UGGGoatGear_Static_StasisBeam::MulticastFreezeActorEffects_Implementation(AActor* Actor) {
}

void UGGGoatGear_Static_StasisBeam::MulticastFailGrabEffects_Implementation() {
}

void UGGGoatGear_Static_StasisBeam::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UGGGoatGear_Static_StasisBeam, StasisBeamValues);
    DOREPLIFETIME(UGGGoatGear_Static_StasisBeam, AimRotator);
    DOREPLIFETIME(UGGGoatGear_Static_StasisBeam, TimesScrolled);
}


