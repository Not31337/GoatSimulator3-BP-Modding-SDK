#include "GGFlyingBroomMovement.h"
#include "Net/UnrealNetwork.h"

UGGFlyingBroomMovement::UGGFlyingBroomMovement(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->DirectionOffsetAngle = -25.00f;
    this->bFollowCameraWithoutInput = false;
    this->BrakeDeceleration = 2000.00f;
    this->MaxSpeed = 1000.00f;
    this->MaxSpeedWhenBoosting = 2000.00f;
    this->Acceleration = 1000.00f;
    this->BoostAcceleration = 2000.00f;
    this->VerticalAcceleration = 250.00f;
    this->GlidingDeceleration = 800.00f;
    this->IdleGravityCompensation = 1.00f;
    this->IdleSpeedThreshold = 50.00f;
    this->InitialPushForceFactor = 1000.00f;
    this->PushForceFactor = 1000.00f;
    this->MinSpeedForDestroyingDestructibles = 500.00f;
    this->MinSpeedForRagdollingCharacters = 500.00f;
    this->MinSpeedForThrowingPlayerOffOnImpact = 1500.00f;
    this->MinDecelerationForThrowingPlayerOffOnImpact = 500.00f;
    this->SpeedThresholdForMaxRotationSpeed = 1000.00f;
    this->VelocitySteeringSpeed = 80.00f;
    this->HorizontalSpeedForMaxPitchAngle = 750.00f;
    this->GroundTraceDistance = 100.00f;
    this->TraceRadius = 25.00f;
    this->Broom = NULL;
    this->ThrottleInput = 0.00f;
}

void UGGFlyingBroomMovement::ClientApplyImpulse_Implementation(FVector_NetQuantize LinearImpulse, FVector_NetQuantize AngularImpulse) {
}

void UGGFlyingBroomMovement::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UGGFlyingBroomMovement, ThrottleInput);
}


