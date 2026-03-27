#include "GGMobileControlsLayoutDefault.h"

UGGMobileControlsLayoutDefault::UGGMobileControlsLayoutDefault() {
    this->ScaleBoxContent = NULL;
    this->JumpButton = NULL;
    this->HeadbuttButton = NULL;
    this->RagdollButton = NULL;
    this->AbilityButton = NULL;
    this->LickButton = NULL;
    this->TrickToggleButton = NULL;
    this->PassengerSeatButton = NULL;
    this->InteractButton = NULL;
    this->VirtualJoystickWidget = NULL;
    this->SkipIntroButton = NULL;
    this->JumpTutorialOverlay = NULL;
    this->LickTutorialOverlay = NULL;
    this->HeadbuttTutorialOverlay = NULL;
    this->GrindButtonEffect = NULL;
    this->DamItCannon = NULL;
    this->ControlledGoat = NULL;
    this->PCIntroComponent = NULL;
    this->BaseUserWidget = NULL;
}

void UGGMobileControlsLayoutDefault::UpdateTargetInteractable(UObject* Interactable) {
}

void UGGMobileControlsLayoutDefault::TrickTogglePressed() {
}

void UGGMobileControlsLayoutDefault::ToggleGoatEggVisibility(bool bEnteredEgg) {
}

void UGGMobileControlsLayoutDefault::PassengerSeatPressed() {
}

void UGGMobileControlsLayoutDefault::OnToggleCinematicUIVisibility(bool bVisibility) {
}

void UGGMobileControlsLayoutDefault::OnSkipButtonTriggered() {
}

void UGGMobileControlsLayoutDefault::OnRagdollEnabled(ULSCharacterMovementComponent* MovementComp, ACharacter* RagdollingCharacter, const FRagdollStateChangeSettings& StateChangeSettings) {
}

void UGGMobileControlsLayoutDefault::OnMenuAboutToBeOpened(FGameplayTag InMenuTag, FMenuNavigationContext Context) {
}

void UGGMobileControlsLayoutDefault::OnIntroFinished(AGGIntro* Intro) {
}


void UGGMobileControlsLayoutDefault::OnGoatReleased(AActor* CatchedActor, AActor* Catcher) {
}

void UGGMobileControlsLayoutDefault::OnGoatLanded(const FHitResult& Hit) {
}

void UGGMobileControlsLayoutDefault::OnGoatGearChanged(AGGGoat* Goat) {
}

void UGGMobileControlsLayoutDefault::OnEnterVehicle(const AGGVehicle* Vehicle, bool IsDriver, const AGGCharacter* Driver) {
}

void UGGMobileControlsLayoutDefault::OnCharacterTeleported(AGGCharacter* Character, const FTransform& OldTransform) {
}

void UGGMobileControlsLayoutDefault::JumpReleased() {
}

void UGGMobileControlsLayoutDefault::JumpPressed() {
}

void UGGMobileControlsLayoutDefault::InteractReleased() {
}

void UGGMobileControlsLayoutDefault::InteractPressed() {
}

void UGGMobileControlsLayoutDefault::HeadbuttUp() {
}

void UGGMobileControlsLayoutDefault::Headbutt() {
}

void UGGMobileControlsLayoutDefault::AbilityDown() {
}


