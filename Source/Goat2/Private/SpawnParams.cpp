#include "SpawnParams.h"

FSpawnParams::FSpawnParams() {
    this->WorldContextObject = NULL;
    this->ActorToSpawnClass = NULL;
    this->Owner = NULL;
    this->Instigator = NULL;
    this->CollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::Undefined;
}

