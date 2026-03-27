#include "GGFlyingCarpetSettings_DataAsset.h"

UGGFlyingCarpetSettings_DataAsset::UGGFlyingCarpetSettings_DataAsset() {
    this->DesiredFlightHeight = 100.00f;
    this->DownwardsTraceRadius = 50.00f;
    this->DownwardsAcceleration = 1000.00f;
    this->HoverBehaviour = EGGHoverBehaviour::WhenPlayerIsNearby;
    this->bShowHoverTraces = false;
    this->bShowHoverDebugInfo = false;
    this->ForwardAcceleration = 1000.00f;
    this->SteerTorque = 500.00f;
    this->bEnableCollisionAvoidance = true;
    this->MaxCollisionTraceDistance = 1000.00f;
    this->MinCollisionTraceDistance = 200.00f;
    this->MaxCollisionTraceDistanceSpeed = 1000.00f;
    this->CollisionAvoidanceTraceVerticalOffset = 100.00f;
    this->bShowCollisionAvoidanceTrace = false;
}


