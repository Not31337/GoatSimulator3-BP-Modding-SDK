#include "GGGoatGear_Static_Genius.h"
#include "Net/UnrealNetwork.h"

UGGGoatGear_Static_Genius::UGGGoatGear_Static_Genius(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bIsOn = false;
    this->OnMaterial = NULL;
    this->OffMaterial = NULL;
}

void UGGGoatGear_Static_Genius::OnRep_IsOn() {
}

void UGGGoatGear_Static_Genius::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UGGGoatGear_Static_Genius, bIsOn);
}


