#include "CameraVolumeSettings.h"

UCameraVolumeSettings::UCameraVolumeSettings() {
    this->MinArmLength = 0.00f;
    this->MaxArmLength = 150.00f;
    this->MaxArmLengthMode = SetLength;
    this->EasFunction = EEasingFunc::ExpoInOut;
    this->BlendInTime = 0.50f;
    this->BlendOutTime = 0.50f;
    this->bClampMinArmLength = false;
}


