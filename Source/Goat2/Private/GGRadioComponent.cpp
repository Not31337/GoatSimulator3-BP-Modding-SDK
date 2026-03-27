#include "GGRadioComponent.h"

UGGRadioComponent::UGGRadioComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RadioVolume = 0.70f;
    this->CurrentTrack = 0;
    this->LastPlayedSong = 0;
    this->LastPlayedIntermission = 0;
    this->PlayingSong = false;
    this->AudioComponent = NULL;
}

void UGGRadioComponent::OnLoadedRadioChannel() {
}

void UGGRadioComponent::OnDriverExitVehicleOwner(AGGVehicle* Vehicle, AGGCharacter* Driver, bool bWasDriver) {
}

void UGGRadioComponent::OnDriverEnterVehicleOwner(AGGVehicle* Vehicle, AGGCharacter* Driver, bool bIsDriver) {
}

void UGGRadioComponent::OnAudioFinished() {
}


