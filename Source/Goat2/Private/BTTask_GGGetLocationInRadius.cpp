#include "BTTask_GGGetLocationInRadius.h"

UBTTask_GGGetLocationInRadius::UBTTask_GGGetLocationInRadius() {
    this->NodeName = TEXT("Get Location In Radius");
    this->bUseBBValue = false;
    this->Radius = 500.00f;
    this->bUseBBLocation = false;
    this->AroundLocationActor = EBehaviorActors::BA_ActorA;
    this->FilterClass = NULL;
    this->bDebugDrawRadius = false;
}


