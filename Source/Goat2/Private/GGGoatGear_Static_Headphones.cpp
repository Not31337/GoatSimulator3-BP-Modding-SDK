#include "GGGoatGear_Static_Headphones.h"
#include "Net/UnrealNetwork.h"

UGGGoatGear_Static_Headphones::UGGGoatGear_Static_Headphones(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bPlayMusic = false;
    this->MusicComponent = NULL;
}

void UGGGoatGear_Static_Headphones::SetPlayMusic(bool bPlay) {
}

void UGGGoatGear_Static_Headphones::OnRep_PlayMusic() {
}

void UGGGoatGear_Static_Headphones::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UGGGoatGear_Static_Headphones, bPlayMusic);
}


