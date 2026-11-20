#include "GGPhysicsActor_HeldBalloon.h"
#include "Net/UnrealNetwork.h"

AGGPhysicsActor_HeldBalloon::AGGPhysicsActor_HeldBalloon(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->NetDormancy = DORM_Awake;
    this->Tags.AddDefaulted(1);
    this->bCanBeOptimized = false;
    this->bCanChangeTickRate = false;
    this->HeldByNPC = NULL;
    this->HeadbuttsRequiredToPop = 3;
    this->HeadbuttShakeImpulseStrength = 70.00f;
    this->HeadbuttShakeAngularImpulseStrength = 25.00f;
    this->CatchedGoatSteeringForce = 1200.00f;
    this->CatchedGoatSteeringDeadzone = 0.10f;
    this->CameraBlendSpeed = 10.00f;
    this->SoundHeadbutt = NULL;
    this->SoundInflate = NULL;
    this->BurstVFX = NULL;
    this->InvalidCatchClasses.AddDefaulted(1);
    this->bIsInflating = false;
    this->CatchedActor = NULL;
    this->CatchedGoat = NULL;
    this->CatchedBy = NULL;
}

void AGGPhysicsActor_HeldBalloon::ServerReleaseCatchedActor_Implementation(AActor* ActorToRelease, FVector ReleaseLocation) {
}

void AGGPhysicsActor_HeldBalloon::ServerHandleCatchedPlayerJump_Implementation() {
}

void AGGPhysicsActor_HeldBalloon::ServerHandleCatchedPlayerHeadbutt_Implementation() {
}

void AGGPhysicsActor_HeldBalloon::OnRep_IsInflating() {
}

void AGGPhysicsActor_HeldBalloon::OnRep_CatchedGoat() {
}

void AGGPhysicsActor_HeldBalloon::OnCatchedPlayerJumpInput(AGGGoat* Goat) {
}

void AGGPhysicsActor_HeldBalloon::OnCatchedPlayerHeadbuttInput(AGGPlayerController* PlayerController) {
}

void AGGPhysicsActor_HeldBalloon::OnCatchedNPCPooledOrMoved(AGGNPC* NPC, bool bWasPooled) {
}

void AGGPhysicsActor_HeldBalloon::OnCatchedActorBeingDestroyed(AActor* Actor, TEnumAsByte<EEndPlayReason::Type> EndPlayReason) {
}

void AGGPhysicsActor_HeldBalloon::OnBalloonShattered(AGGPhysicsActor* Balloon) {
}

void AGGPhysicsActor_HeldBalloon::MulticastReleaseCatchedActor_Implementation(AActor* ActorToRelease, const FVector& ReleaseLocation) {
}

void AGGPhysicsActor_HeldBalloon::MulticastHeadbuttShake_Implementation(const FVector& ShakeDirection, const FVector& ShakeSpinDirection) {
}

void AGGPhysicsActor_HeldBalloon::MulticastCatchActor_Implementation(AActor* ActorToCatch) {
}

AGGGoat* AGGPhysicsActor_HeldBalloon::GetCatchedGoat() const {
    return NULL;
}

AActor* AGGPhysicsActor_HeldBalloon::GetCatchedActor() const {
    return NULL;
}

void AGGPhysicsActor_HeldBalloon::BalloonCatchActor(AActor* ActorToCatch) {
}

void AGGPhysicsActor_HeldBalloon::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AGGPhysicsActor_HeldBalloon, bIsInflating);
    DOREPLIFETIME(AGGPhysicsActor_HeldBalloon, CatchedGoat);
}


