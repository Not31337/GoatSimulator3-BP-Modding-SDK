#include "AltGoatChildMeshOverride.h"

FAltGoatChildMeshOverride::FAltGoatChildMeshOverride() {
    this->bDisableChildMesh = false;
    this->ChildMesh = NULL;
    this->OverrideMaterial = NULL;
    this->Socket = EGoatChildSockets::GS_None;
    this->bOtherSocket = false;
    this->SkinnedMesh = ESkinnedMeshOverride::SMO_NoOverride;
    this->AnimBlueprint = NULL;
    this->bShowAltGoatTag = false;
}

