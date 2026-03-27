#include "ChildMeshElement.h"

FChildMeshElement::FChildMeshElement() {
    this->ChildMesh = NULL;
    this->OverrideMaterial = NULL;
    this->Socket = EGoatChildSockets::GS_None;
    this->bOtherSocket = false;
    this->bAttachToGearPart = false;
    this->bAttachIncludeScale = false;
    this->IgnoreDefaultTransOverride = false;
    this->bSkinnedMesh = false;
    this->AnimBlueprint = NULL;
}

