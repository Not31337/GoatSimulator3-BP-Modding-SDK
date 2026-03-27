#include "GGDiegeticMusicComponent.h"

UGGDiegeticMusicComponent::UGGDiegeticMusicComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bOverrideAttenuation = true;
    this->bAutoPlayOnSignificant = true;
    this->AdditionalSignificanceRange = 1000.00f;
}


