#include "GGSandWormMovementComponent.h"
#include "Net/UnrealNetwork.h"

UGGSandWormMovementComponent::UGGSandWormMovementComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->UndergroundDepth = 50.00f;
    this->SurfaceTraceDistance = 200.00f;
    this->ReSurfaceMaxSpeed = 1500.00f;
    this->ReSurfaceAcceleration = 2000.00f;
    this->LaunchDuration = 0.50f;
    this->FrictionDecayDurationAfterLanding = 1.50f;
    this->bRoamAround = true;
    this->bChangeSurfaceLevelRandomly = true;
    this->MovementSpeedWhenPlayerControlled = 800.00f;
    this->SprintingSpeedMultiplier = 1.50f;
    this->DelayBetweenForwardLaunches = 1.00f;
    this->DelayAfterGettingBackIntoAllowedArea = 5.00f;
    this->KeepDistanceFromLandscapeEdge = 1000.00f;
    this->MaxTurnAngle = 60.00f;
    this->BodyPartMaxDistanceFactorToLeader = 4.00f;
    this->RotationInterpSpeed = 5.00f;
    this->LocationInterpSpeed = 10.00f;
    this->WormOwner = NULL;
    this->GetBackIntoVolume = NULL;
    this->SubmergeParticles = NULL;
    this->AppearParticles = NULL;
}

void UGGSandWormMovementComponent::ServerLaunchSandwormForward_Implementation() {
}

void UGGSandWormMovementComponent::OnWormEndOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex) {
}

void UGGSandWormMovementComponent::OnWormBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}

void UGGSandWormMovementComponent::OnRep_BodyPartTransforms() {
}

void UGGSandWormMovementComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UGGSandWormMovementComponent, ServerBodyPartTransforms);
}


