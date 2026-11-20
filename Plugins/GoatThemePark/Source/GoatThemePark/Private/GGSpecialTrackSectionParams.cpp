#include "GGSpecialTrackSectionParams.h"

FGGSpecialTrackSectionParams::FGGSpecialTrackSectionParams() {
    this->SplinePointScaleAxis = EAxis::None;
    this->SplinePointScaleValue = 0.00f;
    this->Mesh = NULL;
    this->MeshForwardAxis = ESplineMeshAxis::X;
}

