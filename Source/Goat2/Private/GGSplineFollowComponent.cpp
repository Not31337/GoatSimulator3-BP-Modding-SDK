#include "GGSplineFollowComponent.h"

UGGSplineFollowComponent::UGGSplineFollowComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->FollowMode = EFollowMode::Kinematic;
    this->SpeedFactorForSplineCheckDistance = 1.00f;
    this->MovementSpeed = 300.00f;
    this->bAlignYawWithSpline = true;
    this->bAlignPitchWithSpline = true;
    this->bContinueFollowSpline = false;
    this->bTeleportToSplineStart = true;
    this->TraceDistanceToFindGround = 500.00f;
    this->FallbackTraceChannel = ECC_Visibility;
    this->ActorWithSpline = NULL;
    this->SplineToFollow = NULL;
    this->bReachedSplineEnd = false;
}

UGGSplineFollowComponent* UGGSplineFollowComponent::StartFollowingSpline(AActor* ParentActor, USplineComponent* NewSplineToFollow, EFollowMode NewFollowMode, bool NewBTeleportToSplineStart) {
    return NULL;
}

void UGGSplineFollowComponent::SetSplineToFollow_Actor(AActor* ActorWithSplineComponent) {
}

void UGGSplineFollowComponent::SetSplineToFollow(USplineComponent* Spline) {
}


