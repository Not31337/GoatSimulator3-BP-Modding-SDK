#include "GGGoatGear_Scene_AltGoat_Farmer.h"
#include "Net/UnrealNetwork.h"

UGGGoatGear_Scene_AltGoat_Farmer::UGGGoatGear_Scene_AltGoat_Farmer(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->OnGoingHandsParticles = NULL;
    this->bIsAbilityActive = false;
    this->LeftHandOnGoingParticleComp = NULL;
    this->RightHandOnGoingParticleComp = NULL;
}

void UGGGoatGear_Scene_AltGoat_Farmer::OnRep_IsAbilityActive() {
}

void UGGGoatGear_Scene_AltGoat_Farmer::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UGGGoatGear_Scene_AltGoat_Farmer, bIsAbilityActive);
}


