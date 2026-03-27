#include "GGPauseMenu.h"

UGGPauseMenu::UGGPauseMenu() {
    this->DLCMenuReplacementData.AddDefaulted(10);
    this->UMG_PauseMenu_Help = NULL;
    this->OwningGoat = NULL;
}

void UGGPauseMenu::OnOwningGoatRespawned(AGGCharacter* OldCharacter, AGGCharacter* NewCharacter) {
}

void UGGPauseMenu::OnCharacterTeleported(AGGCharacter* Character, const FTransform& OldTransform) {
}


