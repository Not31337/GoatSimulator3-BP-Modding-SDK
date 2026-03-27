#include "BTTask_GGGetLocationInActorBounds.h"

UBTTask_GGGetLocationInActorBounds::UBTTask_GGGetLocationInActorBounds() {
    this->NodeName = TEXT("Get Location In Box");
    this->FilterClass = NULL;
    this->AroundLocationActor = EBehaviorActors::BA_ActorA;
}


