#include "GGPhysicsActor_RiverCruise_Raft.h"

AGGPhysicsActor_RiverCruise_Raft::AGGPhysicsActor_RiverCruise_Raft(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Tags.AddDefaulted(1);
    this->CatchersKeepingSeatedNpcs.AddDefaulted(1);
}

void AGGPhysicsActor_RiverCruise_Raft::GainedSignificance() {
}


