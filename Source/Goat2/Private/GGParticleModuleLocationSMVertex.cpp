#include "GGParticleModuleLocationSMVertex.h"

UGGParticleModuleLocationSMVertex::UGGParticleModuleLocationSMVertex() {
    this->bSpawnModule = true;
    this->bUpdateForGPUEmitter = true;
    this->bSupported3DDrawMode = true;
    this->StaticMeshComponentActorParamName = TEXT("StaticMeshComponentActor");
    this->SelectionType = ESelectionType::ST_Vertex;
}


