#include "GGGoatGear_Static_Cybergoth.h"
#include "Net/UnrealNetwork.h"

UGGGoatGear_Static_Cybergoth::UGGGoatGear_Static_Cybergoth(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bPlayMusic = false;
    this->MusicComponent = NULL;
}

void UGGGoatGear_Static_Cybergoth::SetPlayMusic(bool bPlay) {
}

void UGGGoatGear_Static_Cybergoth::OnRep_PlayMusic() {
}

void UGGGoatGear_Static_Cybergoth::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UGGGoatGear_Static_Cybergoth, bPlayMusic);
}


