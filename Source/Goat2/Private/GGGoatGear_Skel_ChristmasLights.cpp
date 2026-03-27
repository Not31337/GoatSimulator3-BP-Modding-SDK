#include "GGGoatGear_Skel_ChristmasLights.h"
#include "Components/AudioComponent.h"

UGGGoatGear_Skel_ChristmasLights::UGGGoatGear_Skel_ChristmasLights(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ReelingInAudioComponent = CreateDefaultSubobject<UAudioComponent>(TEXT("Reeling In Sound"));
    this->ReelingOutAudioComponent = CreateDefaultSubobject<UAudioComponent>(TEXT("Reeling Out Sound"));
}

float UGGGoatGear_Skel_ChristmasLights::GetCurrentCableRotation() const {
    return 0.0f;
}


