#include "GGCompanion.h"

FGGCompanion::FGGCompanion() {
    this->Pawn = NULL;
    this->RagdollMesh = NULL;
    this->CurrentState = EGGCompanionState::Idle;
    this->bCanChangeState = false;
    this->TimeStampChangedState = 0.00f;
    this->LickedBy = NULL;
    this->TimeStampLicked = 0.00f;
    this->GoatOwner = NULL;
    this->SitAttachComponent = NULL;
}

