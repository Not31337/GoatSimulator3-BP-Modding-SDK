#include "GGGoatGear_Scene_HedgehogShoes.h"
#include "Net/UnrealNetwork.h"

UGGGoatGear_Scene_HedgehogShoes::UGGGoatGear_Scene_HedgehogShoes(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RotationRatePerCharge = 360.00f;
    this->SpinSound = NULL;
    this->SpinParticle = NULL;
    this->HyperSpeedStartSound = NULL;
    this->HyperSpeedSound = NULL;
    this->HyperSpeedParticle = NULL;
    this->bIsSpinning = false;
    this->SpinCharges = 1;
    this->bIsHyperSpeeding = false;
    this->SpinSoundComponent = NULL;
    this->SpinParticleComponent = NULL;
    this->HyperSpeedSoundComponent = NULL;
    this->HyperSpeedParticleComponent = NULL;
}

void UGGGoatGear_Scene_HedgehogShoes::OnRep_IsSpinning() {
}

void UGGGoatGear_Scene_HedgehogShoes::OnRep_IsHyperSpeeding() {
}

void UGGGoatGear_Scene_HedgehogShoes::MulticastHyperSpeedStart_Implementation() {
}

void UGGGoatGear_Scene_HedgehogShoes::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UGGGoatGear_Scene_HedgehogShoes, bIsSpinning);
    DOREPLIFETIME(UGGGoatGear_Scene_HedgehogShoes, SpinCharges);
    DOREPLIFETIME(UGGGoatGear_Scene_HedgehogShoes, bIsHyperSpeeding);
}


