#include "GGGoatGear_Static_WOSHelmet.h"
#include "Net/UnrealNetwork.h"

UGGGoatGear_Static_WOSHelmet::UGGGoatGear_Static_WOSHelmet(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->OngoingParticles = NULL;
    this->AreaEffectParticle = NULL;
    this->LoopingSound = NULL;
    this->bIsAbilityActive = false;
    this->ActivatedParticleComp = NULL;
    this->AEOParticleComp = NULL;
    this->ActivatedSoundComp = NULL;
}

void UGGGoatGear_Static_WOSHelmet::OnRep_IsAbilityActive() {
}

void UGGGoatGear_Static_WOSHelmet::OnAltGoatChanged(AGGGoat* InGoat, UGGAlternativeGoatDataAsset* AltGoat) {
}

void UGGGoatGear_Static_WOSHelmet::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UGGGoatGear_Static_WOSHelmet, bIsAbilityActive);
}


