#include "GGSmoothNetInterpolate.h"

FGGSmoothNetInterpolate::FGGSmoothNetInterpolate() {
    this->SmoothLocationTime = 0.00f;
    this->SmoothRotationTime = 0.00f;
    this->NoSmoothNetUpdateDist = 0.00f;
    this->bIsSupportingClientAuthority = false;
    this->bUseVelocityForInterpolationSpeed = false;
}

