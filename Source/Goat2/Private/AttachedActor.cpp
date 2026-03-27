#include "AttachedActor.h"

FAttachedActor::FAttachedActor() {
    this->AttachedActor = NULL;
    this->bDropOnRagdoll = false;
    this->bCanTakeDamage = false;
    this->bCanBecomeLostObject = false;
    this->bCanDropOnStartle = false;
}

