#include "GGGoatAnimInstanceProxy.h"

FGGGoatAnimInstanceProxy::FGGGoatAnimInstanceProxy() {
    this->TongueActive = 0.00f;
    this->bIsInShallowWater = false;
    this->UnderWaterPitchAngle = 0.00f;
    this->bIsDiving = false;
    this->bIsHeadbuttCharging = false;
    this->GoatAnimInstance = NULL;
    this->GoatMovementComponent = NULL;
}

