#include "GGAsyncActionSpawnPhysicsActor.h"
#include "Templates/SubclassOf.h"

UGGAsyncActionSpawnPhysicsActor::UGGAsyncActionSpawnPhysicsActor() {
    this->WorldContextObject = NULL;
    this->PActorClass = NULL;
    this->Owner = NULL;
    this->Instigator = NULL;
}

UGGAsyncActionSpawnPhysicsActor* UGGAsyncActionSpawnPhysicsActor::SpawnPhysicsActor(const UObject* NewWorldContextObject, TSubclassOf<AGGPhysicsActor> NewPActorClass, FTransform SpawnTransform, ESpawnActorCollisionHandlingMethod CollisionHandlingOverride, TSoftObjectPtr<UStaticMesh> NewPActorMeshOverride, AActor* NewOwner, APawn* NewInstigator) {
    return NULL;
}

void UGGAsyncActionSpawnPhysicsActor::OnPhysicsActorFinishedLoadingResources(AGGPhysicsActor* PhysicsActor) {
}


