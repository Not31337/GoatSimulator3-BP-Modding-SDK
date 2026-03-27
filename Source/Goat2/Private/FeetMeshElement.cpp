#include "FeetMeshElement.h"

FFeetMeshElement::FFeetMeshElement() {
    this->Mesh = NULL;
    this->Socket = EGoatChildSockets::GS_None;
    this->bOtherSocket = false;
    this->AnimBlueprint = NULL;
}

