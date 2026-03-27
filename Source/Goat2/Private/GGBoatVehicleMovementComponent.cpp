#include "GGBoatVehicleMovementComponent.h"
#include "Net/UnrealNetwork.h"

UGGBoatVehicleMovementComponent::UGGBoatVehicleMovementComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->FloatForce = 200.00f;
    this->FloatSpeedMultiplier = 1.00f;
    this->SinkDampening = 500.00f;
    this->WaterLineCheckDist = 30.00f;
    this->BoatLinearDampening = 1.00f;
    this->BoatAngularDampening = 2.00f;
    this->StabilizationTorqueForce = 750.00f;
    this->CurrentMovementMode = EBoatMovementMode::BMM_None;
    this->ForwardThrusterForce = 1500.00f;
    this->BackwardsThrusterForce = 250.00f;
    this->TurningTorqueForce = 100.00f;
    this->AIForwardThrusterForce = 1000.00f;
    this->AIBackwardsThrusterForce = 250.00f;
    this->AITurningTorqueForce = 80.00f;
    this->OwnerBoat = NULL;
    this->OwnerShapeComponent = NULL;
    this->OwnerMesh = NULL;
    this->WaterPhysVolume = NULL;
}

void UGGBoatVehicleMovementComponent::SetMovementMode(EBoatMovementMode NewMode) {
}

EBoatMovementMode UGGBoatVehicleMovementComponent::GetCurrentMovementMode() const {
    return EBoatMovementMode::BMM_None;
}

void UGGBoatVehicleMovementComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UGGBoatVehicleMovementComponent, CurrentMovementMode);
}


