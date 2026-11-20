#include "GGCthillaTentaclesAnimInstance.h"

UGGCthillaTentaclesAnimInstance::UGGCthillaTentaclesAnimInstance() {
    this->bIsPreviewGear = false;
    this->LeftTentacleWeight = 0.00f;
    this->RightTentacleWeight = 0.00f;
    this->ElapsedLeftGrabbedWaitTime = 0.00f;
    this->ElapsedRightGrabbedWaitTime = 0.00f;
    this->bShouldLeftGrabbedWait = false;
    this->bShouldRightGrabbedWait = false;
}


