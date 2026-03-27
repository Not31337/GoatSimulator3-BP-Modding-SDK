#include "BTTask_GGPPickNewTargetActor.h"

UBTTask_GGPPickNewTargetActor::UBTTask_GGPPickNewTargetActor() {
    this->NodeName = TEXT("Pick New Target Actor");
    this->GetActorFrom = EBehaviorActors::BA_ActorA;
}


