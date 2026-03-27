#include "PatrolSystemSettings.h"

UPatrolSystemSettings::UPatrolSystemSettings() {
    this->MaxGroups = 3;
    this->SpawnCooldown = 5.00f;
    this->ForcedRelevantFor = 10.00f;
    this->MinDistanceToOtherGroups = 8000.00f;
    this->RelevancyRange = 15000.00f;
    this->SystemUpdateInterval = 1.00f;
    this->PointsTriedPerInterval = 10;
}


