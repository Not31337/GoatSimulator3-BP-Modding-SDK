#include "LSReplicatedMeshParams.h"

FLSReplicatedMeshParams::FLSReplicatedMeshParams() {
    this->MaxDiveDepth = 0.00f;
    this->bShowDebugTrace = false;
    this->ClientReplicationDeltaTime = 0.00f;
    this->RagdollSyncParameters = NULL;
    this->RagdollOnGroundTransitionRate = 0.00f;
}

