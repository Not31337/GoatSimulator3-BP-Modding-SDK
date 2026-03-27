#include "GGAnimNotifyState_HandIK.h"

UGGAnimNotifyState_HandIK::UGGAnimNotifyState_HandIK() {
    this->HandIKTarget = EHandIKTarget::Hip;
    this->CurveEnableHandIKLeft = TEXT("IK_LeftHand");
    this->CurveEnableHandIKRight = TEXT("IK_RightHand");
}


