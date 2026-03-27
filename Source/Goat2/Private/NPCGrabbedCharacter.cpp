#include "NPCGrabbedCharacter.h"

FNPCGrabbedCharacter::FNPCGrabbedCharacter() {
    this->Character = NULL;
    this->AnimationType = EGrabbedCharacterAnimationType::NGCA_Default;
    this->bLockRotation = false;
    this->PreventUnragdollFor = 0.00f;
}

