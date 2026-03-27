#include "GGGoatGear_Scene_Horns_Lyre.h"
#include "Net/UnrealNetwork.h"

UGGGoatGear_Scene_Horns_Lyre::UGGGoatGear_Scene_Horns_Lyre(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->LyreStump = NULL;
    this->ActivationParticles = NULL;
    this->bIsLyreSpawned = false;
}

void UGGGoatGear_Scene_Horns_Lyre::OnRep_IsLyreSpawned() {
}

void UGGGoatGear_Scene_Horns_Lyre::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UGGGoatGear_Scene_Horns_Lyre, bIsLyreSpawned);
}


