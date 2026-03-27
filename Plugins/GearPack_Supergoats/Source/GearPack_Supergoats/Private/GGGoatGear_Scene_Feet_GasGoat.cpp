#include "GGGoatGear_Scene_Feet_GasGoat.h"
#include "Net/UnrealNetwork.h"

UGGGoatGear_Scene_Feet_GasGoat::UGGGoatGear_Scene_Feet_GasGoat(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ParticleSystem_IsUsable = NULL;
    this->ParticleSystem_IsDisabled = NULL;
    this->AttachSocketParticles = TEXT("Particles");
    this->bIsAbilityUsable = true;
}

void UGGGoatGear_Scene_Feet_GasGoat::OnRep_IsAbilityUsable() {
}

void UGGGoatGear_Scene_Feet_GasGoat::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UGGGoatGear_Scene_Feet_GasGoat, bIsAbilityUsable);
}


