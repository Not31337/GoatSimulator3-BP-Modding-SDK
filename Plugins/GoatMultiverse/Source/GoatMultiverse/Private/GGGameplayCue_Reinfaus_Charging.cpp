#include "GGGameplayCue_Reinfaus_Charging.h"
#include "Components/AudioComponent.h"

AGGGameplayCue_Reinfaus_Charging::AGGGameplayCue_Reinfaus_Charging(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<UAudioComponent>(TEXT("Charge Audio"));
    this->ChargeAudio = (UAudioComponent*)RootComponent;
}


