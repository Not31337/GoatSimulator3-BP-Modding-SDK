#include "GGRadarWaypointActor.h"

AGGRadarWaypointActor::AGGRadarWaypointActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bAlwaysRelevant = true;
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->RadarSystem = NULL;
}


void AGGRadarWaypointActor::OnWaypointDataChanged() {
}

void AGGRadarWaypointActor::OnRadarVisibilityRulesModified() {
}


