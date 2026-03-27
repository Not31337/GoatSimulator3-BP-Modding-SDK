#include "CSNAnimNode_FootIK2.h"

FCSNAnimNode_FootIK2::FCSNAnimNode_FootIK2() {
    this->bIsRagdoll = false;
    this->KneeIKBoneOffsetBoneControlSpace = BCS_WorldSpace;
    this->bDisableFootIKWhenNotOnGround = false;
    this->bDisableOnMobile = false;
    this->TraceModeForFootTraces = ETraceMode::LineTrace;
    this->SphereTraceRadius = 0.00f;
    this->CollisionChannelFootLineTrace = ECC_WorldStatic;
    this->TraceLengthAboveFoot = 0.00f;
    this->TraceLengthBelowFoot = 0.00f;
    this->bUseFootBonesForTracing = false;
    this->FootOffsetLimit = 0.00f;
    this->MaxLegStretchDistance = 0.00f;
    this->PelvisOffsetInterpSpeed = 0.00f;
    this->PelvisResetInterpSpeed = 0.00f;
}

