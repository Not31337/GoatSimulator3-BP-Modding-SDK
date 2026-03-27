#include "GGParticleModuleLocationSpline.h"

UGGParticleModuleLocationSpline::UGGParticleModuleLocationSpline() {
    this->bSpawnModule = true;
    this->bUpdateForGPUEmitter = true;
    this->bSupported3DDrawMode = true;
    this->SplineComponentActorParamName = TEXT("SplineComponentActor");
    this->SplineSpawnType = ESplineSpawnType::SST_Random;
    this->FollowSplineStep = 100.00f;
}


