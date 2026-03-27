#include "BTTask_GGDropAttachedActors.h"

UBTTask_GGDropAttachedActors::UBTTask_GGDropAttachedActors() {
    this->NodeName = TEXT("Drop Attached Actors");
    this->ActorsToDrop = EActorsToDrop::ATD_None;
    this->bBecauseOfStartle = false;
    this->bSetToDropAnimationActors = false;
    this->DropLaunchVelocity = 0.00f;
    this->DroppedItemLifespan = 120.00f;
    this->bDestroyActors = false;
}


