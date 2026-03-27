#include "GGGearAbility_Jetpack.h"

UGGGearAbility_Jetpack::UGGGearAbility_Jetpack() {
    this->bReplicateInputDirectly = true;
    this->RagdollForce = 31000.00f;
    this->UpwardThrust = 13500.00f;
    this->ForwardThrust = 10000.00f;
    this->MaxVelocity = 30000.00f;
    this->UpwardStartVelocity = 1000.00f;
    this->PigAltGoat = NULL;
    this->PigUpwardThrust = 14000.00f;
    this->JetpackGear = NULL;
    this->SkeletalMeshComp = NULL;
}


