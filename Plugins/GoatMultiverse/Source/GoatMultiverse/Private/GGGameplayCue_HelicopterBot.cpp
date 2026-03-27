#include "GGGameplayCue_HelicopterBot.h"
#include "Components/AudioComponent.h"

AGGGameplayCue_HelicopterBot::AGGGameplayCue_HelicopterBot(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<UAudioComponent>(TEXT("Sound Component"));
    this->SoundComponent = (UAudioComponent*)RootComponent;
}


