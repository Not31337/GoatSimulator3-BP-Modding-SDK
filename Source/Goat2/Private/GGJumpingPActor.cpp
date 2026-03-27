#include "GGJumpingPActor.h"
#include "PhysicsEngine/PhysicsConstraintComponent.h"
#include "Components/StaticMeshComponent.h"

AGGJumpingPActor::AGGJumpingPActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Tags.AddDefaulted(1);
    this->MoveImpulseStrength = 100.00f;
    this->MoveUpwardImpulseStrength = 2000.00f;
    this->ReachedDestinationMinDistance = 30.00f;
    this->MovementInterval = 0.50f;
    this->AngularImpulseStrength = 100.00f;
    this->InAirCheckDistance = 5.00f;
    this->ConsideredInAirFallbackTime = 5.00f;
    this->StuckJumpMultiplier = 3.00f;
    this->StuckThreshold = 100.00f;
    this->ConstraintTarget = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("ConstraintTarget"));
    this->DamageDestroyCount = 3;
    this->PhysConstraint = CreateDefaultSubobject<UPhysicsConstraintComponent>(TEXT("UprightConstraint"));
    this->JumpSound = NULL;
    this->NewTargetSound = NULL;
    this->JumpParticle = NULL;
    this->FollowTarget = NULL;
    this->bDestroyWhenOptimized = false;
    this->bDestroyWhenFarFromFollowTarget = false;
    this->DestroyDistanceFromFollowTarget = 30000.00f;
    this->ConstraintTarget->SetupAttachment(RootComponent);
}

bool AGGJumpingPActor::IsJumpingPActorOnGround() {
    return false;
}

FVector AGGJumpingPActor::FindNewLocation() {
    return FVector{};
}


