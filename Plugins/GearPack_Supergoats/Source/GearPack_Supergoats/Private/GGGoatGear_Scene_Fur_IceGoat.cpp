#include "GGGoatGear_Scene_Fur_IceGoat.h"
#include "Net/UnrealNetwork.h"

UGGGoatGear_Scene_Fur_IceGoat::UGGGoatGear_Scene_Fur_IceGoat(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->OngoingSoundCue = NULL;
    this->DeactivationSoundCue = NULL;
    this->OngoingButtParticle = NULL;
    this->ButtParticleAttachSocket = TEXT("AssSocket");
    this->ButtParticleAngle = 0.00f;
    this->bFadeOutOngoingSound = true;
    this->FadeOutDuration = 0.50f;
    this->bAbilityActive = false;
    this->OngoingSound = NULL;
    this->OngoingParticle = NULL;
}

void UGGGoatGear_Scene_Fur_IceGoat::OnRep_AbilityActive() {
}

void UGGGoatGear_Scene_Fur_IceGoat::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UGGGoatGear_Scene_Fur_IceGoat, bAbilityActive);
}


