#include "GGSplineMovementComponent.h"
#include "Net/UnrealNetwork.h"
#include "Templates/SubclassOf.h"

UGGSplineMovementComponent::UGGSplineMovementComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bAutoActivate = false;
    this->FollowMode = EFollowMode::Kinematic;
    this->MovementInputAcceleration = 200.00f;
    this->MovementInputBrakeAcceleration = 200.00f;
    this->bPawnOwnerMovementInput = true;
    this->MovementSpeed = 0.00f;
    this->bAlignYawWithSpline = true;
    this->bAlignPitchWithSpline = true;
    this->bAlignRollWithSpline = false;
    this->BrakingFriction = 0.25f;
    this->GravityScale = 2.00f;
    this->MinGravityForce = 50.00f;
    this->TerminalVelocity = 3000.00f;
    this->PingExtrapolation = 0.10f;
    this->MinInterpolationSpeed = 2000.00f;
    this->ClientInterpolationTeleportDistance = 500.00f;
    this->bContinueFollowSpline = true;
    this->bKeepInitialOffsetToSpline = true;
    this->bTeleportToSplineStart = false;
    this->TraceDistanceToFindGround = 500.00f;
    this->FallbackTraceChannel = ECC_Visibility;
    this->ActorWithSpline = NULL;
    this->SplineToFollow = NULL;
    this->bReachedSplineEnd = false;
    this->ServerSplineDistance = 0.00f;
    this->ServerSplineMovementSpeed = 0.00f;
}

UGGSplineMovementComponent* UGGSplineMovementComponent::StartFollowingSpline(AActor* ParentActor, USplineComponent* NewSplineToFollow, EFollowMode NewFollowMode, bool NewBTeleportToSplineStart, float InitialSpeed, TSubclassOf<UGGSplineMovementComponent> OptSplineMovementClass) {
    return NULL;
}

void UGGSplineMovementComponent::SetSplineToFollow_Actor(AActor* ActorWithSplineComponent) {
}

void UGGSplineMovementComponent::SetSplineToFollow(USplineComponent* Spline) {
}

void UGGSplineMovementComponent::SetHoldCurrentLocation(bool bHold) {
}

void UGGSplineMovementComponent::SetBoostTrackAcceleration(float NewAcceleration) {
}

void UGGSplineMovementComponent::OnRep_SplineToFollow() {
}

void UGGSplineMovementComponent::OnRep_ServerSplineDistance() {
}

void UGGSplineMovementComponent::OnRep_ReachedSplineEnd() {
}

float UGGSplineMovementComponent::GetCurrentSpeed() const {
    return 0.0f;
}

FVector UGGSplineMovementComponent::GetCurrentAccelerationVector() const {
    return FVector{};
}

float UGGSplineMovementComponent::GetCurrentAcceleration() const {
    return 0.0f;
}

void UGGSplineMovementComponent::AddBoostTrackAcceleration(float AdditionalAcceleration) {
}

void UGGSplineMovementComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UGGSplineMovementComponent, ActorWithSpline);
    DOREPLIFETIME(UGGSplineMovementComponent, SplineToFollow);
    DOREPLIFETIME(UGGSplineMovementComponent, bReachedSplineEnd);
    DOREPLIFETIME(UGGSplineMovementComponent, ServerSplineDistance);
    DOREPLIFETIME(UGGSplineMovementComponent, ServerSplineMovementSpeed);
}


