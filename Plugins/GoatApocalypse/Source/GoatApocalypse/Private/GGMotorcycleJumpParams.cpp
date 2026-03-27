#include "GGMotorcycleJumpParams.h"

FGGMotorcycleJumpParams::FGGMotorcycleJumpParams() {
    this->JumpZImpulseAtMaxCharge = 0.00f;
    this->JumpImpulseForwardOffset = 0.00f;
    this->JumpImpulseCurve = NULL;
    this->JumpParticle = NULL;
    this->JumpSound = NULL;
    this->JumpChargeStartSound = NULL;
    this->JumpChargeOngoingSound = NULL;
    this->JumpFullyChargedStartSound = NULL;
    this->JumpFullyChargedOngoingSound = NULL;
    this->MaxChargeDuration = 0.00f;
    this->bAutoReleaseOnMaxCharge = false;
    this->JumpChargeStartParticle = NULL;
    this->JumpChargeOngoingParticle = NULL;
    this->JumpFullyChargedParticle = NULL;
    this->JumpFullyChargedOngoingParticle = NULL;
}

