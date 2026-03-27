#include "GGLickSpawner.h"

UGGLickSpawner::UGGLickSpawner(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bIsSpawnerEnabled = true;
    this->ActorClassToSpawn = NULL;
    this->PActorMesh = NULL;
    this->bSpawnTransformScaleIsWorldScale = false;
}


