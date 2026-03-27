#include "GGGoatGear_Back_OwlCompanion.h"
#include "Net/UnrealNetwork.h"

UGGGoatGear_Back_OwlCompanion::UGGGoatGear_Back_OwlCompanion(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bHasPassiveEffect = true;
    this->CompanionClass = NULL;
    this->Owl = NULL;
    this->PreviewOwl = NULL;
}

void UGGGoatGear_Back_OwlCompanion::OnRep_Owl() {
}

void UGGGoatGear_Back_OwlCompanion::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UGGGoatGear_Back_OwlCompanion, Owl);
}


