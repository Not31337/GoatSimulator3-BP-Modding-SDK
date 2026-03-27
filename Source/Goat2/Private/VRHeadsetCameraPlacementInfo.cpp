#include "VRHeadsetCameraPlacementInfo.h"

FVRHeadsetCameraPlacementInfo::FVRHeadsetCameraPlacementInfo() {
    this->Socket = EGoatSockets::GS_None;
    this->bCustomSocket = false;
    this->bAbsolutePitch = false;
    this->bAbsoluteRoll = false;
    this->bFaithfulRotationWhenGoatIsRagdolled = false;
    this->bFaithfulRotationWhenGoatIsMidAir = false;
}

