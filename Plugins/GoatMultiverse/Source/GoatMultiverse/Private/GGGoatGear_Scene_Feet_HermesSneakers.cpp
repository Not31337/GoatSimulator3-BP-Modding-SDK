#include "GGGoatGear_Scene_Feet_HermesSneakers.h"
#include "Net/UnrealNetwork.h"

UGGGoatGear_Scene_Feet_HermesSneakers::UGGGoatGear_Scene_Feet_HermesSneakers(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bSneakersActive = false;
}

void UGGGoatGear_Scene_Feet_HermesSneakers::OnRep_SneakersActive(bool bWasActive) {
}


void UGGGoatGear_Scene_Feet_HermesSneakers::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UGGGoatGear_Scene_Feet_HermesSneakers, bSneakersActive);
}


