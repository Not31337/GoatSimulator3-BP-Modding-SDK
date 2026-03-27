#include "GGCameraVolume.h"

AGGCameraVolume::AGGCameraVolume(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->SettingsOverride = NULL;
    this->MinArmLength = 0.00f;
    this->MaxArmLength = 150.00f;
    this->MaxArmLengthMode = SetLength;
    this->EasFunction = EEasingFunc::ExpoInOut;
    this->BlendInTime = 0.50f;
    this->BlendOutTime = 0.50f;
    this->bClampMinArmLength = false;
}

void AGGCameraVolume::RemoveOverlappedGoat(AGGGoat* Goat, bool bResetCameraValues) {
}


