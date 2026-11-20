#include "GGDestroyedSection.h"

FGGDestroyedSection::FGGDestroyedSection() {
    this->Root = NULL;
    this->StartMesh = NULL;
    this->EndMesh = NULL;
    this->OverlapVolume = NULL;
    this->SplineIndex = 0;
    this->GapStartDistance = 0.00f;
    this->GapEndDistance = 0.00f;
    this->GrindSplines[0] = NULL;
    this->GrindSplines[1] = NULL;
    this->ActorInstance = NULL;
}

