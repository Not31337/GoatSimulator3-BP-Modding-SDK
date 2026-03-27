#include "GGAnimInstance_Goat_Motorcycle.h"

UGGAnimInstance_Goat_Motorcycle::UGGAnimInstance_Goat_Motorcycle() {
    this->LeanAngleMultiplier = 1.50f;
    this->bUseHandIK = true;
    this->HandlebarLeft = TEXT("Handle_L_Socket");
    this->HandlebarRight = TEXT("Handle_R_Socket");
    this->MotorcycleLeanAngle = 0.00f;
    this->MotorcycleAcceleration = 0.00f;
    this->bIsPassenger = false;
    this->bIsInMotorcycle = false;
    this->HandIKAlpha = 0.00f;
}


