#include "WeightedElement_ThrowingObject.h"

FWeightedElement_ThrowingObject::FWeightedElement_ThrowingObject() {
    this->ThrowObjectType = ENPCThrowObjectType::NTOT_PhysicsActor;
    this->bUseSoftPointer = false;
    this->PActorClass = NULL;
    this->PhysicsProjectileClass = NULL;
}

