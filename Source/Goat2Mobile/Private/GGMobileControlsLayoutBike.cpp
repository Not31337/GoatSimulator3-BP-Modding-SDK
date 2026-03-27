#include "GGMobileControlsLayoutBike.h"

UGGMobileControlsLayoutBike::UGGMobileControlsLayoutBike() {
    this->JumpButton = NULL;
    this->ExitButton = NULL;
    this->VirtualJoystickWidget = NULL;
}

void UGGMobileControlsLayoutBike::OnMenuAboutToBeOpened(FGameplayTag InMenuTag, FMenuNavigationContext Context) {
}

void UGGMobileControlsLayoutBike::OnExitVehicle() {
}

void UGGMobileControlsLayoutBike::OnEnterVehicle(const AGGVehicle* Vehicle, bool IsDriver, const AGGCharacter* Driver) {
}

void UGGMobileControlsLayoutBike::JumpReleased() {
}

void UGGMobileControlsLayoutBike::JumpPressed() {
}

void UGGMobileControlsLayoutBike::ExitPressed() {
}


