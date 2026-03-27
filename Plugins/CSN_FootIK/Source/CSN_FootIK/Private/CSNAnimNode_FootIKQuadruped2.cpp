#include "CSNAnimNode_FootIKQuadruped2.h"

FCSNAnimNode_FootIKQuadruped2::FCSNAnimNode_FootIKQuadruped2() {
    this->HorizontalPelvisOffsetFactor = NULL;
    this->VerticalPelvisOffsetFactor = NULL;
    this->BackPelvisPitchAxis = EAxis::None;
    this->bFlipBackPelvisPitchAxisAxis = false;
    this->MeshForwardAxis = EAxis::None;
    this->bIsMeshForwardAxisPointingBackwards = false;
}

