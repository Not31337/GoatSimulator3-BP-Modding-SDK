#include "LSReplicatedMesh.h"

FLSReplicatedMesh::FLSReplicatedMesh() {
    this->Mesh = NULL;
    this->Root = NULL;
    this->bReplicateLocation = false;
    this->RagdollAuthorityState = ERagdollAuthorityState::Owner;
    this->RagdollAuthorityController = NULL;
}

