#include "GGBossLevelMediaSoundListener.h"
#include "MediaSoundComponent.h"

AGGBossLevelMediaSoundListener::AGGBossLevelMediaSoundListener(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<UMediaSoundComponent>(TEXT("Media Sound Component"));
    this->MediaSoundComponent = (UMediaSoundComponent*)RootComponent;
}


