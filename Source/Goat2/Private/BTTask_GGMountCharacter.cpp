#include "BTTask_GGMountCharacter.h"

UBTTask_GGMountCharacter::UBTTask_GGMountCharacter() {
    this->NodeName = TEXT("Mount Character");
    this->bRemoveCurrentBackGear = false;
    this->MountDuration = 10.00f;
    this->bResetTargetActor = true;
    this->VODelayMin = 1.00f;
    this->VODelayMax = 2.00f;
    this->SpeedIncrease = 0.50f;
    this->ForceCompClass = NULL;
    this->NPC = NULL;
    this->OtherCharacter = NULL;
    this->OwnerBT = NULL;
    this->SaddleComp = NULL;
    this->ForceComp = NULL;
}

void UBTTask_GGMountCharacter::PlayVO() {
}

void UBTTask_GGMountCharacter::OnMenuEnter(FGameplayTag MenuTag) {
}

void UBTTask_GGMountCharacter::MountedCharacterRespawned(AGGCharacter* OldCharacter, AGGCharacter* NewCharacter) {
}

void UBTTask_GGMountCharacter::Dismount() {
}


