#include "GGHelicopterSettings.h"

UGGHelicopterSettings::UGGHelicopterSettings() {
    this->MainRotorThrust = 1500.00f;
    this->MainRotorThrustRampUpSpeed = 5.00f;
    this->MainRotorThrustRampDownSpeed = 2.50f;
    this->MaxPitch = 30.00f;
    this->MaxRoll = 20.00f;
    this->CameraPitchOffset = 15.00f;
    this->MaxSpeed = 2000.00f;
    this->RotationalDamping = 50.00f;
    this->RotorBladeMinRotationSpeed = 0.30f;
    this->MainRotorRotationSpeed = 1500.00f;
    this->RotorBladesBoneName = TEXT("Blades");
    this->MaxFlyingHeight = 12000.00f;
}


