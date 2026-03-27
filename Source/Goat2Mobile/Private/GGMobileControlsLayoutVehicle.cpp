#include "GGMobileControlsLayoutVehicle.h"

UGGMobileControlsLayoutVehicle::UGGMobileControlsLayoutVehicle() {
    this->GasButton = NULL;
    this->ReverseButton = NULL;
    this->BoostButton = NULL;
    this->AbilityButton = NULL;
    this->ExitVehicleButton = NULL;
    this->CurrentVehicle = NULL;
    this->BaseUserWidget = NULL;
}

void UGGMobileControlsLayoutVehicle::ReverseReleased() {
}

void UGGMobileControlsLayoutVehicle::ReversePressed() {
}

void UGGMobileControlsLayoutVehicle::ReBindEnterAndExitVehicleDelegates(AGGGoat* OldGoat, AGGGoat* NewGoat) {
}

void UGGMobileControlsLayoutVehicle::OnToggleCinematicUIVisibility(bool bVisibility) {
}

void UGGMobileControlsLayoutVehicle::OnExitVehicle(AGGCharacter* Character, AGGVehicle* Vehicle) {
}

void UGGMobileControlsLayoutVehicle::OnEnterVehicle(AGGCharacter* Character, AGGVehicle* Vehicle) {
}

void UGGMobileControlsLayoutVehicle::GasReleased() {
}

void UGGMobileControlsLayoutVehicle::GasPressed() {
}

void UGGMobileControlsLayoutVehicle::ExitVehiclePressed() {
}


