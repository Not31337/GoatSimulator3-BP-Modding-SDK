#include "GGReplicatedMovementComponent.h"
#include "Net/UnrealNetwork.h"

UGGReplicatedMovementComponent::UGGReplicatedMovementComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bShouldBeClientAuthoritative = true;
    this->bServerHasControl = false;
    this->HandbrakeInput = 0.00f;
    this->OwnerPawn = NULL;
    this->OwnerPrimRoot = NULL;
    this->OwnerPlayerController = NULL;
    this->CurrentCameraManager = NULL;
}

void UGGReplicatedMovementComponent::ServerUpdateState_Implementation(FReplicatedMovementState NewMovementState, FRepMovement ReplicatedMovement) {
}

void UGGReplicatedMovementComponent::ServerClearInput_Implementation() {
}

bool UGGReplicatedMovementComponent::IsClientAuthoritative() const {
    return false;
}

float UGGReplicatedMovementComponent::GetThrottleInput() const {
    return 0.0f;
}

float UGGReplicatedMovementComponent::GetSteeringInput() const {
    return 0.0f;
}

void UGGReplicatedMovementComponent::ClientApplyImpulse_Implementation(FVector_NetQuantize LinearImpulse, FVector_NetQuantize AngularImpulse) {
}

void UGGReplicatedMovementComponent::ApplyImpulse(FVector_NetQuantize LinearImpulse, FVector_NetQuantize AngularImpulse) {
}

void UGGReplicatedMovementComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UGGReplicatedMovementComponent, bServerHasControl);
    DOREPLIFETIME(UGGReplicatedMovementComponent, ReplicatedMovementState);
}


