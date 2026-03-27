#include "GGWreckableStaticActor.h"

AGGWreckableStaticActor::AGGWreckableStaticActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bCanBeInCluster = false;
}

void AGGWreckableStaticActor::HandleOnTurnedPhys(AActor* OwningActor, UGGStaticMeshComponent* GGMeshComponent, AGGPhysicsActor_Base* PhysActor) {
}


