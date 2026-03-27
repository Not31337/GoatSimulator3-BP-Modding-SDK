#include "GGGearAbility_FarmerBuilder.h"

UGGGearAbility_FarmerBuilder::UGGGearAbility_FarmerBuilder() {
    this->ReplicationPolicy = EGameplayAbilityReplicationPolicy::ReplicateYes;
    this->InstancingPolicy = EGameplayAbilityInstancingPolicy::InstancedPerActor;
    this->Building = NULL;
    this->LoopingActivatedSound = NULL;
    this->HolograficMaterial = NULL;
    this->BlockRotationDegree = 90.00f;
    this->ZStartPointOffset = 600.00f;
    this->ZEndPointOffset = 1000.00f;
    this->BuildingForwardOffset = 200.00f;
    this->bShowDebugLine = false;
    this->GoatRef = NULL;
    this->StructureMeshActor = NULL;
    this->HologramBuilding = NULL;
    this->FarmerGear = NULL;
    this->SpawnedBuilding = NULL;
    this->BuildingMesh = NULL;
    this->ActivatingAudioComponent = NULL;
}

void UGGGearAbility_FarmerBuilder::SpawnHologramStructure(UStaticMesh* Mesh) {
}

void UGGGearAbility_FarmerBuilder::ServerCreateBuilding_Implementation(UStaticMesh* INBuildingMesh, FTransform INBuildingTransform) {
}

void UGGGearAbility_FarmerBuilder::RotateStructure(AGGGoat* Goat) {
}

void UGGGearAbility_FarmerBuilder::ChangeStructure(AGGGoat* Goat) {
}

void UGGGearAbility_FarmerBuilder::BuildStructure(AGGGoat* Goat) {
}


