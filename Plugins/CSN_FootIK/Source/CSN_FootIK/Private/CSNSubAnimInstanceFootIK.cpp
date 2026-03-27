#include "CSNSubAnimInstanceFootIK.h"

UCSNSubAnimInstanceFootIK::UCSNSubAnimInstanceFootIK() {
    this->RagdollBlendTime = 0.50f;
    this->FootIKBlendTime = 0.20f;
    this->bIsRagdoll = false;
    this->Alpha = 1.00f;
    this->CalfIKBones.AddDefaulted(2);
    this->FootBones.AddDefaulted(2);
    this->FootIKBones.AddDefaulted(2);
    this->FootLockingBones.AddDefaulted(2);
    this->LODThreshold = 0;
    this->CalfIKBoneOffsets.AddDefaulted(2);
    this->CurveDisableFootIK = TEXT("Disable Foot IK");
    this->BaseOffsetCompensation = 0.00f;
    this->bDisableFootIKWhenNotOnGround = true;
    this->TraceModeForFootTraces = ETraceMode::LineTrace;
    this->SphereTraceRadius = 3.00f;
    this->CollisionChannelFootLineTrace = ECC_Visibility;
    this->TraceLengthAboveFoot = 50.00f;
    this->TraceLengthBelowFoot = 50.00f;
    this->bUseFootBonesForTracing = true;
    this->TraceBones.AddDefaulted(2);
    this->FootOffsetLimit = 20.00f;
    this->PelvisOffsetInterpSpeed = 12.50f;
    this->PelvisResetInterpSpeed = 7.50f;
    this->FootLockingCurveNames.AddDefaulted(2);
    this->ActualAlpha = 0.00f;
}


