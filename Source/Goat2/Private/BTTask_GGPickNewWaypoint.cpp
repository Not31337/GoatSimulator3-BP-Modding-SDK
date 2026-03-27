#include "BTTask_GGPickNewWaypoint.h"

UBTTask_GGPickNewWaypoint::UBTTask_GGPickNewWaypoint() {
    this->NodeName = TEXT("Pick New Waypoint");
    this->PickingType = EPickingType::PT_BehaviorContainer;
    this->GetWaypointFrom = EBehaviorActors::BA_ActorA;
    this->WorldInteractionPickType = EWIPickType::WIPT_WaypointA;
    this->bCanEditBehaviorContainer = false;
    this->bCanEditWorldInteraction = false;
}


