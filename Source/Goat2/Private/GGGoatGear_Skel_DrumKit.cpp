#include "GGGoatGear_Skel_DrumKit.h"
#include "Net/UnrealNetwork.h"

UGGGoatGear_Skel_DrumKit::UGGGoatGear_Skel_DrumKit(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->BeatInfos.AddDefaulted(7);
    this->KickSound = NULL;
    this->SnareSound = NULL;
    this->HiHatSound = NULL;
    this->CurrentDrumMontage = NULL;
}

void UGGGoatGear_Skel_DrumKit::StartDrumMontage() {
}

void UGGGoatGear_Skel_DrumKit::Snare() {
}

void UGGGoatGear_Skel_DrumKit::OnRep_DrumMontage() {
}

void UGGGoatGear_Skel_DrumKit::KickDrum() {
}

void UGGGoatGear_Skel_DrumKit::HiHat() {
}

UAnimMontage* UGGGoatGear_Skel_DrumKit::GetRandomMontage() {
    return NULL;
}

void UGGGoatGear_Skel_DrumKit::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UGGGoatGear_Skel_DrumKit, CurrentDrumMontage);
}


