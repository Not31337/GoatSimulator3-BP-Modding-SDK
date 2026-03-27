#include "GGVehicleEngineComponent.h"
#include "Net/UnrealNetwork.h"

UGGVehicleEngineComponent::UGGVehicleEngineComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bShowEngineStats = false;
    this->MovementComponent = NULL;
    this->OwnerRootMesh = NULL;
}

void UGGVehicleEngineComponent::OnRep_SimulatedEngine() {
}

float UGGVehicleEngineComponent::GetEngineRPMNormalizedWithIdleRPM() const {
    return 0.0f;
}

float UGGVehicleEngineComponent::GetEngineRPMNormalized() const {
    return 0.0f;
}

void UGGVehicleEngineComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UGGVehicleEngineComponent, SimulatedEngine);
}


