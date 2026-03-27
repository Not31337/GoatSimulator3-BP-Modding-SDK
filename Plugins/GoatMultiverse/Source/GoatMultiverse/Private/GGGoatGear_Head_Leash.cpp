#include "GGGoatGear_Head_Leash.h"
#include "Net/UnrealNetwork.h"

UGGGoatGear_Head_Leash::UGGGoatGear_Head_Leash(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->DefaultMesh = NULL;
    this->LeashedMesh = NULL;
    this->ActiveMesh = NULL;
    this->MaxActorsToLeashMobile = 5;
}

void UGGGoatGear_Head_Leash::OnRep_ActiveMesh() {
}

void UGGGoatGear_Head_Leash::MulticastUnleashActors_Implementation(const TArray<AActor*>& Actors) {
}

void UGGGoatGear_Head_Leash::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UGGGoatGear_Head_Leash, ActiveMesh);
    DOREPLIFETIME(UGGGoatGear_Head_Leash, LeashComponents);
}


