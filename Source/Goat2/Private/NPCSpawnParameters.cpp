#include "NPCSpawnParameters.h"

FNPCSpawnParameters::FNPCSpawnParameters() {
    this->StartingMood = EMoods::M_None;
    this->bForceRelevant = false;
    this->bCanGetFromPool = false;
    this->bAsRagdoll = false;
    this->bDisableCanChangeRagdollState = false;
    this->CollisionHandling = ESpawnActorCollisionHandlingMethod::Undefined;
    this->NPCSpawner = NULL;
    this->bSpawnIncremental = false;
}

