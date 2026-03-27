#include "ThumbnailGenerationSettings.h"

FThumbnailGenerationSettings::FThumbnailGenerationSettings() {
    this->bNeedsUpdate = false;
    this->bUseOptimalCameraTransform = false;
    this->bGenerateThumbnail = false;
    this->bAllowForceCapture = false;
    this->CameraTargetArmLength = 0.00f;
    this->Animation = NULL;
    this->AnimationPosition = 0.00f;
}

