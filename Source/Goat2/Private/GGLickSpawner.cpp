#include "GGLickSpawner.h"
#include "Net/UnrealNetwork.h"

UGGLickSpawner::UGGLickSpawner(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bIsSpawnerEnabled = true;
    this->ActorClassToSpawn = NULL;
    this->PActorMesh = NULL;
    this->bSpawnTransformScaleIsWorldScale = false;
}

void UGGLickSpawner::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UGGLickSpawner, bIsSpawnerEnabled);
}


