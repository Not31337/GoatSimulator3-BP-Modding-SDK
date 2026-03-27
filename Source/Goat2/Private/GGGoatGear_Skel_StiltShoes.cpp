#include "GGGoatGear_Skel_StiltShoes.h"
#include "Net/UnrealNetwork.h"

UGGGoatGear_Skel_StiltShoes::UGGGoatGear_Skel_StiltShoes(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->TargetExtension = 0.00f;
    this->CurrentExtension = 0.00f;
    this->CurrentDirection = -1.00f;
    this->bReachedEnd = false;
    this->MinExtensionAmoutBeforeSoundOff = 5.00f;
    this->bSoundOff = false;
}

void UGGGoatGear_Skel_StiltShoes::OnRep_TargetExtension() {
}



void UGGGoatGear_Skel_StiltShoes::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UGGGoatGear_Skel_StiltShoes, TargetExtension);
    DOREPLIFETIME(UGGGoatGear_Skel_StiltShoes, CurrentDirection);
    DOREPLIFETIME(UGGGoatGear_Skel_StiltShoes, bReachedEnd);
}


