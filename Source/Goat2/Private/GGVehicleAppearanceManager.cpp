#include "GGVehicleAppearanceManager.h"
#include "Net/UnrealNetwork.h"

UGGVehicleAppearanceManager::UGGVehicleAppearanceManager(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->AppearanceTable = NULL;
    this->OwnerVehicle = NULL;
    this->OwnerMesh = NULL;
}

void UGGVehicleAppearanceManager::VehicleAppearanceLoaded() {
}

void UGGVehicleAppearanceManager::OnRep_ReplicatedVehicleAppearance() {
}

FString UGGVehicleAppearanceManager::GetCurrentApperance() {
    return TEXT("");
}

bool UGGVehicleAppearanceManager::GenerateAndSetNewAppearance(bool bExcludeCurrent, const FString& RowName) {
    return false;
}

void UGGVehicleAppearanceManager::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UGGVehicleAppearanceManager, ReplicatedVehicleAppearance);
}


