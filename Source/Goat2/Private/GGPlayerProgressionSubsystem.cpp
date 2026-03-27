#include "GGPlayerProgressionSubsystem.h"

UGGPlayerProgressionSubsystem::UGGPlayerProgressionSubsystem() {
    this->LocalProgression = NULL;
    this->LocalInventory = NULL;
    this->AutoSaveQuestsInterval = 10.00f;
}

void UGGPlayerProgressionSubsystem::ResetGoatProgression() {
}

void UGGPlayerProgressionSubsystem::PreLoadMap(const FString& MapName) {
}

void UGGPlayerProgressionSubsystem::PostLoadMapWithWorld(UWorld* InWorld) {
}

void UGGPlayerProgressionSubsystem::OnIntroSplashComplete() {
}

bool UGGPlayerProgressionSubsystem::IsSaving() const {
    return false;
}


