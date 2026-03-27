#include "GoatTowerPuzzle.h"
#include "Net/UnrealNetwork.h"

AGoatTowerPuzzle::AGoatTowerPuzzle(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->OwnerTower = NULL;
    this->TowerPuzzleState = ETowerPuzzleState::None;
}

void AGoatTowerPuzzle::SetPuzzleCompleted(bool bFromSaveFile) {
}


void AGoatTowerPuzzle::OnRep_TowerPuzzleState() {
}

bool AGoatTowerPuzzle::IsPuzzleCompleted() const {
    return false;
}

void AGoatTowerPuzzle::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AGoatTowerPuzzle, TowerPuzzleState);
}


