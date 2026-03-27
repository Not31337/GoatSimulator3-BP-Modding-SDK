#include "GGGoatGear_Back_BroomSpawner.h"
#include "Net/UnrealNetwork.h"

UGGGoatGear_Back_BroomSpawner::UGGGoatGear_Back_BroomSpawner(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->BroomSpawnerAbility = NULL;
    this->BroomClass = NULL;
    this->SpawnSocket = TEXT("SpawnLocation");
    this->PreviewBroomMesh = NULL;
    this->PreviewBroomAnimInstance = NULL;
}

void UGGGoatGear_Back_BroomSpawner::OnRep_SpawnedBroom() {
}

void UGGGoatGear_Back_BroomSpawner::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UGGGoatGear_Back_BroomSpawner, SpawnedBroom);
}


