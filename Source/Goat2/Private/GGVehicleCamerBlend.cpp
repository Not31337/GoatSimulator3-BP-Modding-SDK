#include "GGVehicleCamerBlend.h"

FGGVehicleCamerBlend::FGGVehicleCamerBlend() {
    this->BlendDuration = 0.00f;
    this->bDoCollisionCheck = false;
    this->bSetRollToZero = false;
    this->SpringArm = NULL;
    this->Camera = NULL;
}

