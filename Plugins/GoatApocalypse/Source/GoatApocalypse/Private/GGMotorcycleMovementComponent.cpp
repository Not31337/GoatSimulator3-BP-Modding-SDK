#include "GGMotorcycleMovementComponent.h"
#include "Net/UnrealNetwork.h"

UGGMotorcycleMovementComponent::UGGMotorcycleMovementComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->SteeringAngle = 0.00f;
    this->EngineDriveTorque = 0.00f;
    this->OwningVehicle = NULL;
    this->VehicleMesh = NULL;
}

void UGGMotorcycleMovementComponent::ServerStopDoingTricks_Implementation() {
}

void UGGMotorcycleMovementComponent::ServerStartDoingTricks_Implementation() {
}

void UGGMotorcycleMovementComponent::ServerOnTrickCompleted_Implementation(int32 TrickIndex) {
}

void UGGMotorcycleMovementComponent::ServerMove_Implementation(FVector_NetQuantize100 Location, FRotator Rotation, FVector_NetQuantize100 ClientVelocity, FVector_NetQuantize100 ClientAngularVelocity, uint8 InDriveTorque, int8 InSteeringAngle) {
}

void UGGMotorcycleMovementComponent::OnRep_VehicleScale() {
}

void UGGMotorcycleMovementComponent::MulticastOnTrickCompleted_Implementation(int32 TrickIndex) {
}

void UGGMotorcycleMovementComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UGGMotorcycleMovementComponent, TrickRotationState);
    DOREPLIFETIME(UGGMotorcycleMovementComponent, VehicleScale);
}


