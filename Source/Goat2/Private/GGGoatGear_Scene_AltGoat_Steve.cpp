#include "GGGoatGear_Scene_AltGoat_Steve.h"

UGGGoatGear_Scene_AltGoat_Steve::UGGGoatGear_Scene_AltGoat_Steve(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bAutoActivate = true;
    this->RagdollMesh = NULL;
    this->DerpyModePhysicsConstraint = NULL;
    this->GoatMovementComp = NULL;
    this->GoatMesh = NULL;
}

void UGGGoatGear_Scene_AltGoat_Steve::OnStopRagdolling(bool bRagdollOnGround, ULSCharacterMovementComponent* MovementComp, ACharacter* SteveCharacter, const FRagdollStateChangeSettings& StateChangeSettings) {
}

void UGGGoatGear_Scene_AltGoat_Steve::OnSteveExitingVehicle(AGGCharacter* Character, AGGVehicle* Vehicle) {
}

void UGGGoatGear_Scene_AltGoat_Steve::OnSteveExitingFlyingBroom(AGGGoat* ExitedGoat, APawn* FlyingBroom) {
}

void UGGGoatGear_Scene_AltGoat_Steve::OnSteveEnteringVehicle(AGGCharacter* Character, AGGVehicle* Vehicle) {
}

void UGGGoatGear_Scene_AltGoat_Steve::OnSteveEnterFlyingBroom(AGGGoat* EnteringGoat, APawn* FlyingBroom) {
}

void UGGGoatGear_Scene_AltGoat_Steve::OnStartRidingCharacter(AGGCharacter* Character) {
}

void UGGGoatGear_Scene_AltGoat_Steve::OnReleased(AActor* Steve, AActor* Catcher) {
}

void UGGGoatGear_Scene_AltGoat_Steve::OnRagdolling(ULSCharacterMovementComponent* MovementComp, ACharacter* SteveCharacter, const FRagdollStateChangeSettings& StateChangeSettings) {
}

void UGGGoatGear_Scene_AltGoat_Steve::OnGoatCollisionStateUpdated(AGGCharacter* GoatCharacter) {
}

void UGGGoatGear_Scene_AltGoat_Steve::OnEmoting(AGGGoat* EmotingGoat, UGGGoatEmote* Emote) {
}

void UGGGoatGear_Scene_AltGoat_Steve::OnCatched(AActor* Steve, AActor* Catcher) {
}

bool UGGGoatGear_Scene_AltGoat_Steve::IsDerpyModeEnabled() const {
    return false;
}

void UGGGoatGear_Scene_AltGoat_Steve::EnableInitialDerpyMode(AGGGoat* InGoat, UGGAlternativeGoatDataAsset* NewAltGoat) {
}


