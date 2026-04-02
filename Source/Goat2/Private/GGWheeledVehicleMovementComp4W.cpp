#include "GGWheeledVehicleMovementComp4W.h"
#include "Net/UnrealNetwork.h"

UGGWheeledVehicleMovementComp4W::UGGWheeledVehicleMovementComp4W(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->WheelSetups.AddDefaulted(4);
    this->OwningVehicle = NULL;
    this->NPCDragCoefficient = 0.30f;
    this->NPCMaxRPM = 800.00f;
    this->AirRollControlScalar = 1.00f;
    this->AirPitchControlScalar = 1.00f;
    this->bAirControlEnabled = true;
    this->SlipperyCheckInterval = 0.50f;
}

void UGGWheeledVehicleMovementComp4W::SetIdleBrakeInput(float IdleBrake) {
}

void UGGWheeledVehicleMovementComp4W::ResetWheelToDefaultValues(int32 WheelIndex) {
}

void UGGWheeledVehicleMovementComp4W::OnRep_VehicleScale() {
}

void UGGWheeledVehicleMovementComp4W::OnRep_HandlingSettings() {
}

float UGGWheeledVehicleMovementComp4W::GetRawSteeringInput() const {
    return 0.0f;
}

void UGGWheeledVehicleMovementComp4W::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UGGWheeledVehicleMovementComp4W, CurrentHandlingSettings);
    DOREPLIFETIME(UGGWheeledVehicleMovementComp4W, VehicleScale);
}


