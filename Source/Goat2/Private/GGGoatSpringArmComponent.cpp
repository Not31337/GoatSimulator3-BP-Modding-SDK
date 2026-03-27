#include "GGGoatSpringArmComponent.h"

UGGGoatSpringArmComponent::UGGGoatSpringArmComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->CameraVerticalOffsetLerpSpeed = 10.00f;
    this->CameraVerticalOffsetLerpSpeed_WallRunning = 15.00f;
    this->CameraDeattachedSnapDistance = 1000.00f;
    this->CameraMaxBehindDistance = 100.00f;
    this->CameraArmLengthTarget = 0.00f;
    this->OwnerGoat = NULL;
}


