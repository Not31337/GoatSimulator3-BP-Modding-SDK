#include "GGNPC_Animal.h"
#include "Net/UnrealNetwork.h"

AGGNPC_Animal::AGGNPC_Animal(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Tags.AddDefaulted(2);
    this->NotResilientToDamageTypes.AddDefaulted(1);
    this->TakeDamageNPCReactionWeights.AddDefaulted(3);
    this->PassedOutChancePerHit.AddDefaulted(3);
    this->DefaultLogicTree = NULL;
    this->WalkSpeed = 250.00f;
    this->RunSpeed = 600.00f;
    this->AnimalController = NULL;
    this->bIsGuardFromGear = false;
}


void AGGNPC_Animal::SoftMaterialsLoaded() {
}

void AGGNPC_Animal::SetDefaultMaterials(TArray<FMatElement> NewDefault) {
}

void AGGNPC_Animal::SelectNewBaseMaterialWithOverride(const TArray<FAnimalMaterialCollection>& OverrideCollections) {
}

void AGGNPC_Animal::SelectNewBaseMaterial() {
}


void AGGNPC_Animal::OnRep_DefaultMaterials() {
}



AGGAIController_Animal* AGGNPC_Animal::GetAnimalController() {
    return NULL;
}


void AGGNPC_Animal::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AGGNPC_Animal, DefaultMaterials);
    DOREPLIFETIME(AGGNPC_Animal, bIsGuardFromGear);
}


