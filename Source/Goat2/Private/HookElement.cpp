#include "HookElement.h"

FHookElement::FHookElement() {
    this->HookActor = NULL;
    this->HookMeshComp = NULL;
    this->HookState = EHookState::HS_Active;
    this->HitComp = NULL;
}

