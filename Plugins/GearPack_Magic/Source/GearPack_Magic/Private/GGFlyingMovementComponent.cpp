#include "GGFlyingMovementComponent.h"

UGGFlyingMovementComponent::UGGFlyingMovementComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RotationSpeed = 5.00f;
    this->SpeedThresholdToOrientateToVelocity = 50.00f;
    this->MinFlyingHeight = 200.00f;
    this->OwlCompanion = NULL;
}


