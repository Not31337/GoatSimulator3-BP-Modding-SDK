#include "GGGearAbility_DareDevil.h"

UGGGearAbility_DareDevil::UGGGearAbility_DareDevil() {
    this->DelayBeforeEndAbility = 0.53f;
    this->GroundCheckDistance = 100.00f;
    this->CloseToGroundJumpForce = 800.00f;
    this->JumpForce = 500.00f;
    this->LaunchForceXY = 1500.00f;
    this->LaunchAmplitude = 1.00f;
    this->LanchCameraShake = NULL;
    this->ParticleYawOffset = 90.00f;
    this->CameraShakeSize = 0.03f;
}

FRotator UGGGearAbility_DareDevil::GetParticleRotation() {
    return FRotator{};
}


